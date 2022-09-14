#include "main.h"
#include <unistd.h>

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: prints multiples of 9, 0 otherwise
 */

void times_table(void)
{
	int a, b, c, d, e;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b+++)
		{
			c = a * b;

			if (c <= 9)
			{
				_putchar(c + '0');
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}

			else
			{
				d = c % 10;
				m = (c - d) / 10;
				_putchar(e + '0');
				_putchar(d + '0');
				_putchar(44);
				_putchar(32);
			}
		}

		_putchar('\n');
	}
}
