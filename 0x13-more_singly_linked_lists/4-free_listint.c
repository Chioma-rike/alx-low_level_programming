#include "lists.h"
/**
 * free_listint - Funtion that frees a linked list
 * @head: Pointer to the first node of the list
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}

}
