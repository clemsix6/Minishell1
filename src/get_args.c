/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** get_args.c
*/

#include "cly_string.h"
#include <dirent.h>
#include <stdlib.h>

char **get_args(char *str)
{
    int j;
    char **args = cly_str_split(str, ' ');

    for (int i = 0; args[i] != NULL; i++) {
        for (j = 0; args[i][j] != '\n' && args[i][j] != 0; j++) {}
        if (args[i][j] == '\n')
            args[i][j] = 0;
    }
    return args;
}
