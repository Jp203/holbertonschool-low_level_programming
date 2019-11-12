#include "sort.h"

/**
 * bubble_sort - array is sorted using bubble sort
 * @array: array that will be sorted
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, j, hold;

    if (array == NULL || size < 2)
        return;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                hold = array[j];
                array[j] = array[j + 1];
                array[j + 1] = hold;
                print_array(array, size);
            }
        }
    }
}
