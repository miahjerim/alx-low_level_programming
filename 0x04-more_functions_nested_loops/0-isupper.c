#include "main.h"

/**
 *_isupper - Checks for uppercase character
 * @c:character to check
 * Returns: 1 if c is uppercase otherwise 0
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')

		return (1);
	else
		return (0);
}
