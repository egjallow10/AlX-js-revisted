#include <stdarg.h>



int example(int n,...)
{
	va_list args;
	va_start(args, n);
	int first = va_arg(args, int);

	va_end(args);
}
