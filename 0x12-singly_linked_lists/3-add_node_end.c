#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A double pointer to the head of the list.
 * @str: The string to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node;
    list_t *last;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    /* Duplicate the string */
    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
        free(new_node);
        return (NULL);
    }

    /* Set the length of the string and the next pointer to NULL */
    new_node->len = strlen(str);
    new_node->next = NULL;

    /* If the list is empty, set the new node as the head */
    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        /* Traverse the list to find the last node */
        last = *head;
        while (last->next != NULL)
        {
            last = last->next;
        }

        /* Attach the new node at the end */
        last->next = new_node;
    }

    return (new_node);
}
