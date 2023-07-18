#include "main.h"
#include <ctype.h>
/**
 * _islower - check if the given character is lower case.
 * @c: character to test.
 *
 * Return: 1 (True) else 0 (False)
 */
int _islower(char num)
{
	if (num >= 'a' && num <= 'z')
	{
		return (1);
	}
	return (0);
}
