/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** command_cd.c
*/

#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/stat.h>
#include "cly_io.h"
#include "cly_string.h"
#include "minishell1.h"

bool count_args(char **args)
{
    int i = 0;

    for (; args[i] != NULL; i++) {}
    if (i > 2) {
        cly_write(0, "cd: Too many arguments.\n");
        return false;
    }
    return true;
}

bool test_folder(char *path, char *name)
{
    DIR *dir = opendir(path);
    struct dirent *entry;

    if (dir != NULL) {
        while ((entry = readdir(dir)) != NULL) {
            if (cly_strcmp(entry->d_name, name) == 0)
                return true;
        }
    }
    cly_write(0, name);
    cly_write(0, ": No such file or directory.\n");
    return false;
}

bool test_type(char *path, char *name)
{
    struct stat path_stat;

    stat(path, &path_stat);
    if (S_ISREG(path_stat.st_mode) != 0) {
        cly_write(0, name);
        cly_write(0, ": Not a directory.\n");
        return false;
    }
    return true;
}

void command_cd(char **args, char **env)
{
    char *last_path;
    char *new_path;

    if (!count_args(args))
        return;
    last_path = get_env_var(env, "PWD");
    new_path = cly_strapnd_str(last_path, "/");
    if (!test_folder(new_path, args[1]))
        return;
    new_path = cly_strapnd_str(new_path, args[1]);
    if (!test_type(new_path, args[1]))
        return;
    set_env_var(env, "OLDPWD", last_path);
    set_env_var(env, "PWD", new_path);
}