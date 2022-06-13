/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** get_env_var.c
*/

#include "cly_string.h"
#include <stdlib.h>

char *get_env_var(char **env, char *key)
{
    int len = cly_strlen(key);

    for (int i = 0; env[i] != NULL; i++) {
        if (cly_strncmp(env[i], key, len) == 0) {
            return env[i] + len + 1;
        }
    }
    return NULL;
}