/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** get_path.c
*/

#include "cly_string.h"
#include <dirent.h>
#include <stdlib.h>

char **get_path(char **env)
{
    char **split = NULL;

    for (int i = 0; env[i] != NULL; i++) {
        if (cly_strncmp(env[i], "PATH", 4) == 0) {
            split = cly_str_split(env[i] + 5, ':');
            return split;
        }
    }
    return split;
}
