#include "main.h"

/**
 * main - program starts here
 * Function prints the alphabet in lowercase
 * Alphabet: The characters being printed
 *
 * Return: 1 on success, -1 on error
 */

void print_alphabet(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
		_putchar(b);

	_putchar('\n');
}
