#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	int i;
	char *separator;
	char *string;
	
	va_list args;
	va_start (args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case: 'c'
				      printf("%s%c", separator, va_arg(args, int));
				      break;
				case: 'f'
				      printf("%s%f", separator, va_arg(args, double));
				      break;
				case: 'i'
				      printf("%S%d", separator, va_arg(args, int));
				      break;
				case: 's'
				      string = va_arg(args, char *);
				      if (!str)
					      printf("nil");
				      printf("%s%s", separator, str);
				      break;:
			}
		}
	}
}
