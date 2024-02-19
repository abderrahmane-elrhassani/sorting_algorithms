#include "sort.h"

/**
 * insertion_sort_list - function to sort a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 *
 * @list: Double pointer to the head of the doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
    listint_t *current, *temp, *swap;

    if (!list || !*list)
        return;

    current = (*list)->next;
    while (current)
    {
        temp = current;
        current = current->next;
        while (temp && temp->prev && temp->prev->n > temp->n)
        {
            swap = temp->prev;
            if (temp->next)
                temp->next->prev = swap;
            if (swap->prev)
                swap->prev->next = temp;
            else
                *list = temp;
            temp->prev = swap->prev;
            swap->next = temp->next;
            temp->next = swap;
            swap->prev = temp;
            print_list(*list);
        }
    }
}
