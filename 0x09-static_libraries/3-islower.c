#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: character to be checked
 *
 * Return: 1 on success, 0 on otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}
