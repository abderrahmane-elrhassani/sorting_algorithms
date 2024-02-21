#include "sort.h"
/**
 * swap - Exchanges the positions of two integers within an array
 * @a: The first integer to be swapped
 * @b: The second integer to be swapped
 */

void ar_chang(int *x, int *v)
{
    int len = *x;
    *x = *v;
    *v = len;
}

/**
 * partition - Divides the array into two segments
 * @array: The array of integers to be partitioned
 * @lw: The initial index of the segment to be partitioned
 * @hg: The final index of the segment to be partitioned
 * @size: The total size of the array
 * Return: The index position of the pivot after partitioning
 */

int partition(int *array, int lw, int hg, size_t size)
{
    int pivot = array[hg];
    int a = lw - 1;
    int b = lw;

    while (b <= hg - 1)
    {
        while (array[b] < pivot)
        {
            a++;
            ar_chang(&array[a], &array[b]);
            if (a != b)
                print_array(array, size);
            b++;
        }
        b++;
    }
    ar_chang(&array[a + 1], &array[hg]);
    if (a + 1 != hg)
        print_array(array, size);

    return (a + 1);
}

/**
 * quick_sort_helper - Executes the quicksort algorithm on a given array segment
 * @array: The array of integers to be sorted
 * @lw: The initial index of the segment to be sorted
 * @hg: The final index of the segment to be sorted
 * @size: The total size of the array
 */
void quick_sort_helper(int *array, int lw, int hg, size_t size)
{
    if (lw < hg)
    {
        int pi = partition(array, lw, hg, size);

        quick_sort_helper(array, lw, pi - 1, size);
        quick_sort_helper(array, pi + 1, hg, size);
    }
}

/**
 * quick_sort - Arranges an array of integers in increasing order
 * @array: The array of integers to be sorted
 * @size: The total size of the array
 */
void quick_sort(int *array, size_t size)
{
    quick_sort_helper(array, 0, size - 1, size);
}
