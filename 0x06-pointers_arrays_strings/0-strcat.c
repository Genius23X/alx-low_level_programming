#include "main.h"

/**
 *@dest: A pointer to a character thay will be changed
 *@src: A pointer to a character that will be changed
 *Return:dest
 */


char *_strcat(char *dest, char *src);
{
int i, j;

i = 0;
while  (dest[i] != '\0')
{
i++;
}

j = 0;
while (src[j] != '\0')
{
dest [i] = src [j];
j++;
i++;
}
dest [i] = '\0';

retun (dest);
}
