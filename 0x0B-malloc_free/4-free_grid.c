#include "main.h"
/**
 * free_grid - a function that frees a 2 dimensional grid
 * @grid: second pointer grid
 * @height: height od dimension
 */
void free_grid(int **grid, int height)
{
	int iterat;

	for (iterat = 0; iterat < height; iterat++)
	{
		free(grid[iterat]);
	}
	free(grid);
}
