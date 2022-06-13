/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** execute.c
*/

#include "cly_string.h"
#include <dirent.h>
#include <stdlib.h>
#include <unistd.h>

int try_execute_path(char **args, char *path, char **env)
{
    char *bin_path_slash = cly_dyn_strcat(path, "/");
    char *bin_path = cly_dyn_strcat(bin_path_slash, args[0]);

    if (execve(bin_path, args, env) != -1) {
        free(bin_path_slash);
        free(bin_path);
        return 0;
    }
    free(bin_path_slash);
    free(bin_path);
    return -1;
}

int execute(char **args, char **path, char **env)
{
    for (int i = 0; path[i] != NULL; i++) {
        if (try_execute_path(args, path[i], env) == 0)
            return 0;
    }
    return -1;
}
