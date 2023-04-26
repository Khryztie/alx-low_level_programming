#include "main.h"
/**
 * _insalpha - Shows 1 if the input is a
 * Description: letter Another cases, shows 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for letters. 0 for the rest.
 */
int (void)_isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
