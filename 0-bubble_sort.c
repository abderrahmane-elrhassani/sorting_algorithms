#include "sort.h"

/**
 * BubbleSort - function to arrange an array of integers in ascending order
 * using the bubble sort algorithm
 *
 * @array: The array of integers to be sorted
 * @size: The number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, b;
    int len;

    if (!array || !size)
        return;

    i = 0;
    while (i < size)
    {
        b = 0;
        while (b < size - 1)
        {
            if (array[b] > array[b + 1])
            {
                len = array[b];
                array[b] = array[b + 1];
                array[b + 1] = len;
                print_array(array, size);
            }
            b++;
        }
        i++;
    }
}
