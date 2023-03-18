#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 *        followed by a new line
 *
 *        Return: always 0
 */
int main(void)
{
	int m;
	int n;

	for (m = 0 ; m < 10 ; m++)
		putchar(m + '0');
	for (n = 'a' ; n <= 'f' ; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
