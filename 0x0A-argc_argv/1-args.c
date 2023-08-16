#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of the program.
 *
 * @argc: Number of arguments passed.
 * @argv: Array of strings containing the arguments.
 * Description: This program counts and prints the number of arguments passed to it.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    int num_arguments = argc - 1;

    printf("%d\n", num_arguments);

    return 0;
}
