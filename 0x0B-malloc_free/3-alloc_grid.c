#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - pointer 2d array of integers
 * @width: obviously the width of 2d array duh
 * @height: same but height
 * Return: null if wdth or hght are 0 or less and different of null
 *			and the 2d array if has width and height valid
 */
int **alloc_grid(int width, int height)
{
	int **arrayTwoD;
	int wdth_ary, hght_ary;

	/* if has no width or height invalid the return */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* asign a space in memory of integer mul the height value greater than 0*/
	arrayTwoD = malloc(sizeof(int *) * height);

	if (arrayTwoD == NULL)
		return (NULL);

	/*counter hght_ary run through height of alloc_grid 2d array*/
	for (hght_ary = 0; hght_ary < height; hght_ary++)
	{
		/*asign memory to widht of 2d array in the hght_position*/
		arrayTwoD[hght_ary] = malloc(sizeof(int) * width);

		/* pointer at the end of 2d array run width and empty the space*/
		if (arrayTwoD[hght_ary] == NULL)
		{
			for (wdth_ary = 0; wdth_ary < hght_ary; wdth_ary++)
				free(arrayTwoD[wdth_ary]);
			free(arrayTwoD);
			return (NULL);
		}

		/* count the width and in the pointer position equal to 0*/
		for (wdth_ary = 0; wdth_ary < width; wdth_ary++)
			arrayTwoD[hght_ary][wdth_ary] = 0;
	}

	return (arrayTwoD);
}
