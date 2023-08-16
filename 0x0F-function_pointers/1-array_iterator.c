#include <stddef.h>

/**
 * array_iterator - This function iterates through an array and applies an action to each element.
 *
 * @array: Pointer to the array of integers.
 * @size: Number of elements in the array.
 * @action: Function pointer to the action to be applied to each element.
 * Description: This function iterates through the given array and applies the provided action to each element.
 *              The action is a function that takes an integer argument.
 * Return: This is a void function, no return.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i = 0;

    if (array && size && action)
    {
        while (i < size)
        {
            action(*(array + i));
            i++;
        }
    }
}
