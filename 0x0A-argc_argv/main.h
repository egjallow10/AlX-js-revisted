#ifdef MAIN_H
#define MAIN_H

#elif defined(__GNUC__)
# define UNUSED(x) UNUSED_ ## x __attribute__((unused))
#elif defined(__LCLINT__)
# define UNUSED(x) /*@unused@*/ x
#else
# define UNUSED(x) x
#include <stdio.h>
int _putchar(char c);

#endif
