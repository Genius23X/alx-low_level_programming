#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * malloc_checked - is a function that allocates memory
 * @b: size used to initialize unsigned int
 * Return: always success
**/

void *malloc_checked(unsigned int b)
{
void *p'

p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}
