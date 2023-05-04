#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to be converted to binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	/*if function to check if the number is greater than 0*/
	if (n >> 0)
	{
		/*if n>1 Recursively call the function, n rightshifted by 1*/
		if (n >> 1)
			print_binary(n >> 1);
		/*print the last bit of the number by performing a bitwise AND operation*/
		_putchar((n & 1) + '0');
	}
	else
	{
		/*print '0' if the number is not greater than 0*/
		_putchar('0');
	}
}
