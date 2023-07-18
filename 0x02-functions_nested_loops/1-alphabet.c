#include "stdio.h"

/**
*main - Entry point
*
* Description: alpha
*
* Return: Alawys 0 (Success)
*/

int main(void)
{
	int ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		-putchar(ch);
	-putchar('\n');

	return (0);
}

