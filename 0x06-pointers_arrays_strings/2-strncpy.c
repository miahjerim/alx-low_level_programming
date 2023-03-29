#include"main.h"
/**
 * char *_strncpy - copies a string.
 * @src: string source
 * @dest: string destination
 * @n:bytes of src copied
 * Return: dest(ponter to the resulting string)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
