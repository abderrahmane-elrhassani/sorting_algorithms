#include "sort.h"

/**
 * ar_chang - This function swaps two nodes in a doubly-linked list
 * @l1: This is the address of the first node.
 * @l2: This is the address of the second node
 *
 *return: This function does not return any value (void)
 */
void ar_chang(listint_t *l1, listint_t *l2)
{
        if (l1->prev != NULL)
        {
                l1->prev->next = l2;
        }
        if (l2->next != NULL)
        {
                l2->next->prev = l1;
        }
        l1->next = l2->next;
        l2->prev = l1->prev;
        l1->prev = l2;
        l2->next = l1;

/**
 * insertion_sort_list - This function performs an insertion sort on a doubly-linked list.
 * @list: This is the address of the pointer to the head node.
 *
 * Return: This function does not return any value (void)
 */
void insertion_sort_list(listint_t **list)
{
        listint_t *k, *y;

        if (!list || !*list || !(*list)->next)
                return;
        k = (*list)->next;
        while (k)
        {
                y = k;
                k = k->next;
                while (y && y->prev)
                {
                        if (y->prev->n > y->n)
                        {
                               ar_chang(y->prev, y);
                               if (!y->prev)
                                       *list = y;
                               print_list((const listint_t *)*list);
                        }
                        else
                               y = y->prev;
               }
        }
}
