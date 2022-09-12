#include <stdio.h>

/**
 * main - Entry mode
 *
 * variable assignment and type
 *
 * while loop
 *
 * if function
 *
 * putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b, w;

	for (b = '48'; b <= '57'; b++)
	{
		for (w = b + 1; w <= '57'; w++)
		{
		
			putchar(b);
			putchar(w);

			if (b == 56 && w ==57)
				continue;

			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
