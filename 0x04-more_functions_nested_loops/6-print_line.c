#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: is the number of times the character _ should be printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int gad;

		for (gad = 1; gad <= n; gad++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
