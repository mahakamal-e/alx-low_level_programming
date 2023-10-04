#include "main.h"
/**
 * **alloc_grid - function that returns a pointer to
 * a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: NULL on failure
 * If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **n;
	int x;
	int y;

	n = malloc(sizeof(*n) * height);

	if (width <= 0 || height <= 0 || n == 0)
	{
		return (NULL);
	}
	else
	{
		for (x = 0; x < height; x++)
		{
			n[x] = malloc(sizeof(**n) * width);

			if (n[x] == NULL)
			{
				for (; x >= 0 ; x--)
					free(n[x]);
				free(n);
				return (NULL);
			}
		}
		for (x = 0; x < height; x++)
		{
			for (y = 0; y < width; y++)
				n[x][y] = 0;
		}
		return (n);
	}
}


