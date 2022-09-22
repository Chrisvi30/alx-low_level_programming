#include "main.h"

/**
 * _strcat - concatenates  the string pointed to by @src to
 * the end of the string pointed to by @dest
 *
 * @dest: String that will be appended
 *
 * @src: String to be concatenated upon
 *
 * Return: returns poiner to @dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
