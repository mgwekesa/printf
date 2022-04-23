#include "main.h"

/**
  * printf_oct - prints an octal number
  * @arg: argument
  * Return: length
  */

int printf_oct(va_list arg)
{
	int i;
	int *arr;
	int len = 0;
	unsigned int n = va_arg(arg, unsigned int);
	unsigned int tmp = n;

	while (n / 8 != 0)
	{
		n /= 8;
		len++;
	}
	len++;
	arr = malloc(len * sizeof(int));
	i = 0;
	while (i < len)
	{
		arr[i] = tmp % 8;
		tmp /= 8;
		i++;
	}

	i = len - 1;
	while (i >= 0)
	{
		_putchar(arr[i] + '0');
		i--;
	}
	free(arr);
	return (len);
}
