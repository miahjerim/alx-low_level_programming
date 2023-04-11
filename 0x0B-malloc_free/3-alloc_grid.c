#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - return a pointer to a 2 dim array of integers
 *
 * @width: width
 *
 * @height: height
 *
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **num;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	num = malloc(sizeof(int *) * height);

	if (num == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		num[i] = malloc(sizeof(int) * width);

		if (num[i] == NULL)
		{
			for (; i >= 0; i--)
				free(num[i]);

			free(num);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			num[i][j] = 0;
	}

	return (num);
}
