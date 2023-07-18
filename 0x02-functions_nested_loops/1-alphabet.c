#include "main.h"
/**
 * main - prints alphabets in lowercase
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
