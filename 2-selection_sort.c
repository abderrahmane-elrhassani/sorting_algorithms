#include "sort.h"

/**
 * selection_sort - This function implements the selection sort algorithm.
 *
 *@array: The array that needs to be sorted.
 *@size: The number of elements in the array.
 *
 */
void selection_sort(int *array, size_t size)
{
    size_t a = 0, b, d;
    int len;

    while (!array || !size)
        return;

    while (a < size - 1)
    {
        b = size - 1;
        d = a + 1;
        while (b > a)
        {
            while (array[a] > array[d])
            {
                d = b;
            }
            b--;
        }
        while (array[a] > array[d])
        {
            len = array[a];
            array[a] = array[d];
            array[d] = len;
            print_array(array, size);
        }
        a++;
    }
}
