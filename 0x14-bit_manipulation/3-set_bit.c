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
	/*if function checking if the index is valid*/
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (0);
	}
	/*set the bit at the given index*/
	*n |= (1UL << index);
	/*return 1 if successfully set,0 otherwise*/
	return (1);
}
