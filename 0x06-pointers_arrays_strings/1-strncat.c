 #include "main.h"

/**
 * _strncat - appends src to the dest string
 *
 * @dest: string to append by src
 *
 * @src: string to append to dest
 *
 * @n: largest number of bytes to append
 *
 * Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
