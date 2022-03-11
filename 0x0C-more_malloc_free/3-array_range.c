#include "main.h"
/**
 * @brief
 *
 */
int *array_range(int min, int max)
{
    int *s;
    unsigned int i;

    if (min > max)
        return (0);
    
    s = (int *)malloc(sizeof(int) * (max - min) + 1);
    
    for (i = min; i <= max; i++)
        s[i] = i;

    return (s);
}
