#include "sort.h"


/**
 * selection_sort - sort array with selection sort
 * @array: ints to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
    unsigned int count1, count2, low;
    int hold;


    for (count1 = 0; count1 < size - 1; count1++)
    {
        low = count1;

        for (count2 = count1 + 1; count2 < size; count2++)
            if (array[count2] < array[low])
                low = count2;
        if (low != count1)
        {
            hold = array[low];
            array[low] = array[count1];
            array[count1] = hold;
            print_array(array, size);
        }
    }
}
