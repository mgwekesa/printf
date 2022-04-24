#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
  * struct format - match the conversion specifiers for printf
  * @id: type char pointer of the specifier
  * @f: type pointer to function for the conversion specifier
  */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int printf_pointer(va_list arg);
int printf_hex_aux(unsigned long int arg);
int printf_HEX_aux(unsigned int arg);
int printf_excl_str(va_list arg);
int printf_hex(va_list arg);
int printf_oct(va_list val);
int printf_bin(va_list arg);
int printf_srev(va_list arg);
int printf_rot13(va_list arg);
int printf_int(va_list arg);
int printf_unsigned(va_list arg);
int _strlen(char *s);
int _strlenc(const char *s);
int printf_37(void);
int printf_char(va_list arg);
int printf_str(va_list arg);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
