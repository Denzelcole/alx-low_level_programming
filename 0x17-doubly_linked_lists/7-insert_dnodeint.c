#include <stdlib.h>
#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a new node at a given position
* @h: pointer to head of doubly linked list
* @idx: index of the list where new node should be added
* @n: value of new node
* Return: address of new node, or NULL if failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new, *temp = *h;
    unsigned int i;

    new = malloc(sizeof(dlistint_t));
    if (!new)
        return (NULL);
    new->n = n;
    if (idx == 0)
    {
        new->prev = NULL;
        new->next = *h;
        if (*h)
            (*h)->prev = new;
        *h = new;
        return (new);
    }
    for (i = 0; temp && i < idx - 1; i++)
        temp = temp->next;
    if (!temp)
    {
        free(new);
        return (NULL);
    }
    new->prev = temp;
    new->next = temp->next;
    if (temp->next)
        temp->next->prev = new;
    temp->next = new;
    return (new);
}
