#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');

	else
	{
		int i, j, k;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= (size - 1); j++)
			{
				_putchar(' ');
			}

			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
