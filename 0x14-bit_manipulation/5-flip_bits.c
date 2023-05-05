#include "main.h"
/**
 * flip_bits - returns number of bits needed to flip..
 * @n: (unsigned long int): The first number.
 * @m: m (unsigned long int): The second number.
 *
 * Return: The number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/*variable to keep track on the number of bits to be flipped*/
	unsigned int bits;

	/*for loop to loop through the bits of both numbers n and m*/
	for (bits = 0; n || m; n >>= 1, m >>= 1)
	{
		/*if current bits of n and m are no equal*/
		if ((n & 1) != (m & 1))
			/*increament number of bits to be flipped*/
			bits++;
	}
	/*Return The number of bits that need to be flipped.*/
	return (bits);
}


