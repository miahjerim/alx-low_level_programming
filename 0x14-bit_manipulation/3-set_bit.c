#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: Pointer to the unsigned long integer whose bit is to be set
 * @index: The index of the bit to be set (0-based indexing)
 *
 * Return: 1 if the bit was successfully set, 0 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/*unsigned int variable decleared*/
	unsigned int i;
	/*if function checking if the index is valid*/
	if (index > 63)
	{
		return (-1);
	}
	/*set the bit at the given index*/
	i = 1 << index;
	*n = (*n | i);

	/*return 1 if successfully set,0 otherwise*/
	return (1);
}
