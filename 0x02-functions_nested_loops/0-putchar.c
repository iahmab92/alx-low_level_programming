#include "main.h"
/**
 * main - print _putchar
 *
 * Returns: always 0
 */
int main(void)
{
	char *a = "_putchar\n";

	while (*a)
	{
		_putchar(*a);
		a++;
	}
	return (0);
}
