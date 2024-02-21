#include "sort.h"

/**
 * shell_sort - Arranges an array of integers in increasing order by employing
 * the Shell sort algorithm and utilizing the Knuth sequence
 * @array: The array of integers that is to be arranged
 * @size: The total number of elements in the array
 */

void shell_sort(int *array, size_t size)
{
    int len;
    size_t gap_size = 1;
    size_t f, k;
    
    while (gap_size < size / 3)
        gap_size = gap_size * 3 + 1;
    while (gap_size > 0)
    {
        for (f = gap_size; f < size; f++)
        {
            len = array[f];
            k = f;
            while (k >= gap_size && array[k - gap_size] > len)
            {
                array[k] = array[k - gap_size];
                k -= gap_size;
            }
            array[k] = len;
        }
        print_array(array, size);
        gap_size /= 3;
    }
}
