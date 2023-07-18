#include "main.h"

/**
 * _sign - checks f n is greater than zero
 *        or n is zero or n is less than zero
 *
 * @n: takes integer type input for function.
 *
 * Return: 1 if +, 0 if -, -1 if -
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
			return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
			return (0);
	}
	else
	{
		_putchar(45);
			return (-1);
	}
}
