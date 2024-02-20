#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
    size_t a, b, m;
    int len;

    for (a = 0; a < size - 1; a++)
    {
        m = a;
        for (b = a + 1; b < size; b++)
        {
            if (array[b] < array[m])
                m = b;
        }
        while (m != a)
        {
            len = array[a];
            array[a] = array[m];
            array[m] = len;
            print_array(array, size);
            break;
        }
    }
}
