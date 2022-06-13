/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** command_setenv.c
*/

#include <stdbool.h>
#include <stdlib.h>
#include "cly_io.h"
#include "minishell1.h"

bool count_args_valid(char **args)
{
    int i = 0;

    for (; args[i] != NULL; i++) {}
    if (i != 3) {
        cly_write(0, "cd: Too many arguments.\n");
        return false;
    }
    return true;
}

void command_setenv(char **args, char **env)
{
    if (!count_args_valid(args))
        return;
    set_env_var(env, args[1], args[2]);
}