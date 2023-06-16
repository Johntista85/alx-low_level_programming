#include "lists.h"
/**
  * free_dlistint - frees a linked list
  * @head: head of the list
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		temp->prev = NULL;
		temp->next = NULL;
		free(temp);
	}
}
