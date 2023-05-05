#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	/*char and unsigned int variable declaration*/
	char *c;
	unsigned int i;

	/*initialize variable i and store its address in c*/
	i = 1;
	c = (char *) &i;
	/*Return the value of c address of i*/
	return ((int)*c);
}
