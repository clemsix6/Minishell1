/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** set_env_var.c
*/

#include "cly_string.h"
#include <stdlib.h>

int edit_env_var(char **env, char *key, char *value)
{
    int len = cly_strlen(key);
    char *var;

    var = cly_strapnd_str(key, "=");
    var = cly_strapnd_str(var, value);
    for (int i = 0; env[i] != NULL; i++) {
        if (cly_strncmp(env[i], key, len) == 0) {
            env[i] = var;
            return 0;
        }
    }
    return -1;
}

int get_env_size(char **env)
{
    int count = 0;

    while (env[count] != NULL)
        count++;
    return count;
}

char **append_char(char **env, char *var)
{
    char **new_env = malloc(get_env_size(env) + 1);

    
}

int add_env_var(char **env, char *key, char *value)
{
    char *var;

    var = cly_strapnd_str(key, "=");
    var = cly_strapnd_str(var, value);
}

int set_env_var(char **env, char *key, char *value)
{
    int success = edit_env_var(env, key, value);

    if (success == 1)
        return 1;
    
}
