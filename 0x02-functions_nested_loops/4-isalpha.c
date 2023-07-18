#include "main.h"

/**
 * _isalpha - checks if character is a  a letter
 *            both lowercase or uppercase
 *
 * @c: takes input from other function
 *
 * Ruturn: return 1 is c if true else 0
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
