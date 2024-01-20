#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a grid
 * @grid: int par
 * @height: int par
 *
 * Return: blank
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
