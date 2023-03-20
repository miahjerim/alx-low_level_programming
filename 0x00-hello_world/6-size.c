#include <stdio.h>
/**
 * main - The code first prints the size of a char, then an int, then a long int          
 *        , followed by a long long int, and finally the size of a float.
 *
 *        on the computer it is compiled and run on.
 *
 * Return: always 0 on success
 */

int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of float: %zu byte(s)\n", sizeof(float));
	return (0);
}
