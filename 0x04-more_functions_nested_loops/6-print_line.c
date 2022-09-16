#include "main.h"

/**
 * print_line - draws straight line in terminal
 * @n: the number of time the character _ is shown
 * Return: none
 */

void print_line(int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
