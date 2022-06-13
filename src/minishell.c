/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** main file
*/

#include "cly_io.h"
#include "cly_string.h"
#include "minishell1.h"
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <sys/wait.h>

bool detect_command(char **args, char **env)
{
    if (cly_strcmp(args[0], "pwd") == 0) {
        command_pwd(env);
        return true;
    } else if (cly_strcmp(args[0], "cd") == 0) {
        command_cd(args, env);
        return true;
    } else if (cly_strcmp(args[0], "env") == 0) {
        command_env(env);
        return true;
    } else if (cly_strcmp(args[0], "exit") == 0) {
        exit(0);
    } else if (cly_strcmp(args[0], "setenv") == 0) {
        command_setenv(args, env);
        return true;
    }

    return false;
}

void process_command(char *str, char **path, char **env)
{
    pid_t current_pid = getpid();
    char **args = get_args(str);

    if (cly_strlen(str) == 1 || detect_command(args, env))
        return;
    if (fork() == -1)
        return;
    if (getpid() == current_pid) {
        wait(NULL);
        return;
    }
    if (execute(args, path, env) == -1) {
        cly_write(2, args[0]);
        cly_write(2, ": Command not found.\n");
    }
    free(args);
    exit(0);
}

int loop(char **path, char **env)
{
    char *str;
    size_t len;

    while (1) {
        str = NULL;
        len = 0;
        cly_write(1, "$> ");
        if (getline(&str, &len, stdin) == -1)
            return 0;
        str[len - 1] = 0;
        process_command(str, path, env);
        free(str);
    }
}

int main(__attribute__((unused)) int ac,
         __attribute__((unused)) char **av,
         __attribute__((unused)) char **env)
{
    char **path = get_path(env);

    if (path == NULL)
        return 84;
    loop(path, env);
    for (int i = 0; path[i] != NULL; i++)
        free(path[i]);
    free(path);
}
