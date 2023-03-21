#include "main.h"
/**
 *_islower- function that checks for lowercae
 *
 * @c:parameter to be printe
 *
 * Return: 1 if it is a lowercase
 * and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 9 && c <= 122)
		return (1);
	else
		return (0);
}
