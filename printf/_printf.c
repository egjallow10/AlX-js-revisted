#include "main.h"


/**
 * _printf - simplified version of printf
 * @format: the format string
 * Return: number of characters printed
 */

 int _printf(const char *format, ...)
 {
    int i, count;
    va_list args;
    va_start(args, format);

    if(!format)
        return(-1);

    for ( i = 0; format[i]; i++)
    {
        if(format[i] == '%')
        {
          i++;
          if(format[i] == 'c')
          {
            count += _putchar(va_arg(args,int)); 

          }else if (format[i] == 's')
          {
            char *str = va_arg(args, char *);
            int j = 0;
            
            if(!str)
            {
                str = "(null)";
            
                while (str[j])
                {
                    count += _putchar(str[j++]);
                }
            }
                

          }
          else if(format[i] == '%')
          {
            count += _putchar('%');
          }
          else if(format[i] == 'd' || format[i] == 'i')
          {
            count += print_number(va_arg(args, int));

          }
          else if(format[i] == 'b')
          {
             print_binary(va_arg(args, unsigned int));
          }else if (format[i] == 'u')
          {
            print_unsigned_base(va_arg(args, unsigned int), 10, 0);
          }
          else if (format[i] == 'o')
          {
             print_unsigned_base(va_arg(args, unsigned int), 8, 0);
          }
          else if (format[i] == 'x')
          {
             print_unsigned_base(va_arg(args, unsigned int), 16, 0);
          }
          else if (format[i] == 'X')
          {
             print_unsigned_base(va_arg(args, unsigned int), 16, 1);
          }
          else
          {
            count += _putchar('%');
            count += _putchar(format[i]);
          }
           
        }else
        {
            count += _putchar(format[i]);
        }
    }
    va_end(args);
    return(count);
    
 }