#include "main.h"

/**
 * jack bauer - prints every minute of the day, starting from 00:00 -23:59
 *
 * Return: prints time, 0 otherwise
 */

void jack_bauer(void)
{
int a, b, c, d;

for (a = 48; a <= 50; a++)
{
	for (b = 48; b <= 57; b++)
	{
	if ((a <= 49 && b <= 57) || (a <= 50 && b <= 51))
			{
				for (c = 48; c <= 53; c++)
				{
					for (d = 48; d <= 57; d++)
					{
						_putchar(a);
						_putchar(b);
						_putchar(':');
						_putchar(c);
						_putchar(d);
						_putchar('\n');
					}
				}
			}
	}
}
}
