#include "main.h"

/**
 * _puts_recursion - print string followed by a new line
 * @s: string
 *
 * REturn: 1 on success
 */

voud _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_putchar_recursion(s + 1);
}
