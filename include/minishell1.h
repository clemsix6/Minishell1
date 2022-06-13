/*
** EPITECH PROJECT, 2022
** Minishell1
** File description:
** minishell1.h
*/

#ifndef MINISHELL1_MINISHELL1_H
#define MINISHELL1_MINISHELL1_H

int execute(char **args, char **path, char **env);
char **get_args(char *str);
char **get_path(char **env);
char *get_env_var(char **env, char *key);
void command_pwd(char **env);
int set_env_var(char **env, char *key, char *value);
void command_cd(char **args, char **env);
void command_env(char **env);
void command_setenv(char **args, char **env);

#endif //MINISHELL1_MINISHELL1_H
