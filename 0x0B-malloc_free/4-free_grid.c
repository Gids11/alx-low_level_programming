#include "main.h"
#include <stdlib.h>
/**
 * free_grid - a function that frees a 2 dimensional grid previously create
 * @grid: the array
 * @height: the height of the array
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
