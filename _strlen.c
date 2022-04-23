#include "main.h"

/**
  * _strlen - finds the length of a string
  * @s: the input string
  * Return: the count
  */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;

	return (c);
}

/**
  * _strlenc - finds length for constant char pointer s
  * @s: char pointer
  * Return: count
  */

int _strlenc(const char *s)
{
	int c;

	while (s[c] != '\0')
		c++;
	return (c);
}
