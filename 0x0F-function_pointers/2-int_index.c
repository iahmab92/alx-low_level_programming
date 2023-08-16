#include "function_pointers.h"
/**
 * int_index - this functions find the index of a int
 *
 *@array: array to find the index
 *@size:  size of the array
 *@cmp: a function pointer.
* Description: this function find the index of a int)
*
* Return: void function no return type
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(*(array + a)))
			return (a);
	}

	return (-1);
}
