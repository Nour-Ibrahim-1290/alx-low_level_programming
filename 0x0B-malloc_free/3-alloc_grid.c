#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate an int 2D array space in memory
 * with 0 as default value
 *
 * @w: width of array
 * @h: height of array
 *
 * Return: Pointer to the allocated space  or NULL if it fails
 */

int **alloc_grid(int w, int h)
{
	int **arr;
	int i, j;

	if ((w <= 0) || (h <= 0))
		return (NULL);

	arr = (int **) malloc(h * sizeof(int *));

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < h; i++)
	{
		arr[i] = (int *) malloc(w * sizeof(int));
		if (arr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}

	for (i = 0; i < h; i++)
		for (j = 0; j < w; j++)
			arr[i][j] = 0;

	return (arr);
}
