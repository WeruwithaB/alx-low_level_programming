#include "main.h"

/**
 * helper - finds the square root of two numbers
 *
 * @a: The number
 * @b: The number to test for the square root of @a
 *
 * Return: square root
 */

int helper(int a, int b)
{
	if (b * b > a)
		return (-1);

	else if (b * b == a)
		return (b);

	else
		return (helper(a, b + 1));

	return (1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be computed
 *
 * Return: square root number, -1 otherwise
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (helper(n, 1));
}
