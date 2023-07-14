#include <stdio.h>

/**
*main - Entry point
*
* Description: num
*
* Return: Alawys 0 (Success)
*/

int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		putchar(", ");
		n++;
	}
	putchar('\n');

	return (0);
}
