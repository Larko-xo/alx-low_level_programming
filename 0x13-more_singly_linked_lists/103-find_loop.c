#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @srch: This indicates the linked list to search for
 *
 * Return: The address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *srch)
{
        listint_t *slow = srch;
        listint_t *fast = srch;

        if (!srch)
                return (NULL);

        while (slow && fast && fast->next)
        {
                fast = fast->next->next;
                slow = slow->next;
                if (fast == slow)
                {
                        slow = srch;
                        while (slow != fast)
                        {
                                slow = slow->next;
                                fast = fast->next;
                        }
                        return (fast);
                }
        }

        return (NULL);
}
