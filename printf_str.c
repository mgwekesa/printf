#include "main.h"

/**
  * printf_str - print a string
  * @arg: arguments
  * Return: string length
  */

int printf_str(va_list arg)
{
	char *s;
	int i;
	int len;

	s = va_arg(arg, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}
