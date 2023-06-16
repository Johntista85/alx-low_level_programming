#include "lists.h"
/**
  * insert_dnodeint_at_index - inserts a node at an index
  * @h: double pointer to a linked list
  * @idx: where to add the node
  * @n: value of the node
  * Return: pointer to the new node
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	temp = *h;
	if (!temp)
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
		return (new);
	}
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = temp;
		temp->prev = new;
		*h = new;
		return (new);
	}
	for ( ; idx > 1 && temp->next; idx--)
		temp = temp->next;
	if (idx > 1 && !temp->next)
		return (NULL);
	new->prev = temp;
	new->next = temp->next ? temp->next : NULL;
	if (temp->next)
		temp->next->prev = new;
	temp->next = temp->next && idx > 1 ? NULL : new;
	return (new);
}
