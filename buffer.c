#include "holberton.h"
/**
 * hand_buff - Prints
 * Return: A pointer.
 */
char *hand_buff()
{
	char *buffer;

	buffer = malloc(2048);
	if (!buffer)
		return (NULL);
	return (buffer);
}
