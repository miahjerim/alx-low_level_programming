#include <stdio.h>
/**
*main-prints the size of a char,int,long int,long long int,float,
*on the computer its run on.
*
*Return: always 0 on success
*/

int main(void)
{
	printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %zu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of float: %zu byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
