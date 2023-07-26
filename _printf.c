#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	char *buf = malloc(sizeof(char) * (strlen(format) + 1));
	va_list args;
	va_start(args, format);
	vfprintf(buf, format, args);
	va_end(args);
	free(buf)

		return (1);
}
