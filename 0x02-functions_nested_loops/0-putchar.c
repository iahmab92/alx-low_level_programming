#include "main.h"
/**
 * main - print putchar
 *
 * Returns - 0
 */
int main(void)
{
	char *a = "_putchar";

	while (*a)
	{
		_putchar(*a);
		a++;
	}
	return (0);
}
