#include "main.h"

/**
  * printf_hex - prints a hexadecimal number
  * @arg: argument
  * Return: length
  */

int printf_hex(va_list arg)
{
	int i;
	int *arr;
	int len = 0;
	unsigned int n = va_arg(arg, unsigned int);
	unsigned int tmp = n;

	while (n / 16 != 0)
	{
		n /= 16;
		len++;
	}
	len++;
	arr = malloc(len * sizeof(int));
	i = 0;
	while (i < len)
	{
		arr[i] = tmp % 16;
		tmp /= 16;
		i++;
	}

	i = len - 1;
	while (i >= 0)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 39;
		_putchar(arr[i] + '0');
		i--;
	}
	free(arr);
	return (len);
}
