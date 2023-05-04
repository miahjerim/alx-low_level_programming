#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if one or more chars in the string b that is not 0 or 1, b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	/*declear and initialize output variable to 0*/
	unsigned int j = 0;
	int len, i;

	/*if function checks if the input string is NULL*/
	if (b == NULL)
		return (0);

	/*Find the length of the input string*/
	j = 0;

	/*for loop to iterrate through the input string*/
	for (len = 0; b[len] != '\0'; len++);

	for (len--, i = 1; len >= 0; len--, i *=2)
	{
		/*if function checks if the current character is not 0 or 1*/
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		/*conversion of current character to an int and add to output*/
		if (b[len] & 1)
		{
			j += i;
		}
	}
	/*Return the convwerted number*/
	return (j);
}
