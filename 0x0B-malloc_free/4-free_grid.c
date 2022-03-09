#include "main.h"
/**
 * free_grid - free a 2d array
 * @grid: 2d array
 * @height: height of array
 */
void free_grid(int **grid, int height)
{
	int h_ary;

	/* run for 2d array and frees */
	for (h_ary = 0; h_ary < height; h_ary++)
		free(grid[h_ary]);
	free(grid);
}
