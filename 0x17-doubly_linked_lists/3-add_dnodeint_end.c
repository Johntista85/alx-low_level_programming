#include "lists.h"
/**
  * *add_dnodeint_end - add a node to the end of the list
  * @head: head of the list
  * @n: value to add to the l
  * Return: pointer to the element added
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *nw;

	nw = malloc(sizeof(dlistint_t));
	while (!nw)
		return (NULL);
	nw->n = n;
	nw->next = NULL;
	if (!*head)
	{
		nw->prev = NULL;
		*head = nw;
		return (*head);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = nw;
	tmp->prev = *head;
	return (tmp);
}
