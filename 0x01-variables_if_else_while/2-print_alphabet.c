#include <stdio.h>

/**
*main - Entry point
*
* Description: alphabet in lowercase
*
* Return: Alawys 0 (Success)
*/

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');

	return (0);
}
