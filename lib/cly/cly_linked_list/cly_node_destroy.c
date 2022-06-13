/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_node_destroy.c
*/

#include <stdlib.h>
#include "cly_linked_list.h"

int cly_node_destroy(node_t **node)
{
    node_t *loop_node;
    node_t *tmp_node;

    if (node == NULL)
        return -1;
    loop_node = (*node);
    if (loop_node == NULL)
        return -1;
    while (loop_node->next != NULL) {
        tmp_node = loop_node->next;
        free(loop_node);
        loop_node = tmp_node;
    }
    free(loop_node);
    return 0;
}