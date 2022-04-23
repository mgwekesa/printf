#include "main.h"

/**
  * printf_rot13 - prints string to rot13
  * @arg: arguments
  * Return: length
  */

int printf_rot13(va_list arg)
{
	int i;
	int j;
	int len = 0;
	int k = 0;
	char *s = va_arg(arg, char*);
	char alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char rot13[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	i = 0;
	while (s[i])
	{
		k = 0;
		j = 0;
		while (alpha[j] && !k)
		{
			if (s[i] == alpha[j])
			{
				_putchar(rot13[j]);
				len++;
				k = 1;
			}
			j++;
		}
		if (!k)
		{
			_putchar(s[i]);
			len++;
		}
		i++;
	}
	return (len);
}

