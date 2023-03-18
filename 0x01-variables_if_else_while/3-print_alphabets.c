#include <stdio.h>
/**
 * main - prints alphabets in lower case
 *        prints alphabets in upper case
 *        followed by a new line
 *
 * Return: always 0
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
