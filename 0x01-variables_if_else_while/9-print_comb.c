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
	int n = 0;

	while (n <= 0)
	{
		putchar(n + 48);
		if (n != 9)
		{
		putchar(",");
		putchar(" ");
	}
		n++;
	}
	putchar('\n');

	return (0);
}
