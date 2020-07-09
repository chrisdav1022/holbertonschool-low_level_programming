#include "holberton.h"

/**
 *
 *
 *
 *
 */

int **alloc_grid(int width, int height)
{
	int **p = NULL, i, j;
    
	if (width <= 0 || height <= 0)
		return(NULL);

	p = malloc (width * sizeof(int)); //creamos el array principal [][][]...[]
        if (p == NULL)
		return(NULL);
        
	for (i = 0; i <= width; i++ )
	{
		p[i] = malloc (height * sizeof(int)); //creamos el array secundario 
		if (p[i]  == NULL)
			return(NULL);
                
		for (j = 0; j <= height; j++)
			free(p[j]);
			p[i][j] = 0;
		
		free(p);
	}
	return (p);
}
