#include "main.h"

/**
  * printf_srev - prints a string in reverse
  * @arg: arguments
  * Return: length of string
  */

int printf_srev(va_list arg)
{
	char *s = va_arg(arg, char*);
	int i = 0;
	int len = 0;

	if (s == NULL)
		s = "(nil)";
	while (s[len] != '\0')
		len++;
	i = len - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	return (len);
}
