#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_number(int n);
void print_binary(unsigned int n);
void print_unsigned_base(unsigned long n, int base, int uppercase);
#endif