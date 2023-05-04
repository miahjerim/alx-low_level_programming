#include "main.h"
/*
 * get_bit -prints the return value of a bit at a given index.
 * @n: The number whose bit value is to be returned
 * index: The index of the bit to be returned
 *
 * Return: -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	/*if function checking if value of n is zero and index < 64*/
	if (n == 0 && index < 64)
		return (0);
	/*loop through each n bits from right to left*/
	for (i = 0; i <= 63; n >>= 1, i++)
	{
		/*check if the current index matches the given index*/
		if (index == i)
		{
			/*return the bit value*/
			return (n & 1);
		}
	}
	/*return -1 if an error occured*/
	return (-1);
}
