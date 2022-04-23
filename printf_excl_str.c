#include "main.h"

/**
  * printf_excl_str - only prints the string
  * @arg: string to be printed
  * Return: the string length
  */

int printf_excl_str(va_list arg)
{
	char *s;
	int i;
	int len = 0;
	int cast;

	s = va_arg(arg, char *);
	if (s == NULL)
		s = "(null)";

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len += 2;
			cast = s[i];
			if (cast < 16)
			{
				_putchar('0');
				len++;
			}

			len += printf_hex_aux(cast);
		}

		else
		{
			_putchar(s[i]);
			len++;
		}
		i++;
	}
	return (len);
}
