#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - a function that prints numbers from 0-9
 *
 * Return: 0-9, excluding 2 and 4, following by new line
 */
void print_most_numbers(void)
{
	int z;

	for (z =48; z < 58; z++)
	{
		if ((z == 50) || (z == 52))
		{
			continue;
		}
		putchar(z);
	}
	putchar(10);
}

