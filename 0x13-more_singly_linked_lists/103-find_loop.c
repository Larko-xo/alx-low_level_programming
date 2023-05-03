#include "lists.h"

/**
 * find_listint_loop: It FINDS the loop in a linked list;
 * @head: linked list to search for;
 *
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hier = head;
	listint_t *today = head;

	if (!head)
		return (NULL);

	while (hier && today && today->next)
	{
		today = today->next->next;
		hier = hier->next;
		if (today == hier)
		{
			hier = head;
			while (hier != today)
			{
				hier = hier->next;
				today = today->next;
			}
			return (today);
		}
	}

	return (NULL);
}
