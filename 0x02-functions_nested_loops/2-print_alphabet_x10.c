#include "main.h"

/**
 *print_alphabet_x10 - prints 10 times the alphabet
 *Alphabet: The characters being printed
 *
 *Return: 1 on success, -1 on error
 */

void print_alphabet_x10(void)
{
	int b;
	char letter;

	for (b = 0; b <= 9; b++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);

		_putchar('\n');
	}
}
