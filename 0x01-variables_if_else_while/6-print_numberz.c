#include <stdio.h>

/**
*main - Entry point
*
* Description: number
*
* Return: Alawys 0 (Success)
*/

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');

	return (0);
}
