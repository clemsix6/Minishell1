/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** command_env.c
*/

#include "cly_io.h"
#include <stdlib.h>

void command_env(char **env)
{
    for (int i = 0; env[i] != NULL; i++) {
        cly_write(1, env[i]);
        cly_write(1, "\n");
    }
}