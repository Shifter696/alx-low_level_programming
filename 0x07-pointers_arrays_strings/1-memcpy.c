#include "main.c"
/**
 * Auth : Shifter696
 * _memcpy - Copies @n bytes from the memory area pointed to by @src into that pointed toby @dest .
 * @dest: A pointer to the memory area to copy @src into.
 * @src: the buffer to copy charaxters from .
 * @n: The number of bytes to copy from @src.
 *
 * Return: A pointer to the destination buffer @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source =src;

	for (index = 0; index < n; indexx++)
		destination [index] = source[index];
	return (dest);

}
