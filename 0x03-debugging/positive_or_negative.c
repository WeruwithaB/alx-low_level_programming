#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - entry point of programs
 *
 * Return: Always 0
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
	return;
}