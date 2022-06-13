/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** command_pwd.c
*/

#include "cly_io.h"
#include "minishell1.h"

void command_pwd(char **env)
{
    char *pwd = get_env_var(env, "PWD");

    cly_write(1, pwd);
    cly_putchar('\n');
}