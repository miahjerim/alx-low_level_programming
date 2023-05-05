#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to an unsigned long int.
 * @index: is the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	/*if function to check if index is greater than 63*/
	if (index > 63)
		return (-1);

	/*set i to 1 shifted by index bits to the left*/
	i = 1 << index;
	/*if function checks if the bit is 0 at the given index*/
	if (*n & i)
		/*if not, set bit to 0 using XOR*/
		*n ^= i;
	/*return 1 if it worked*/
	return (1);
}
