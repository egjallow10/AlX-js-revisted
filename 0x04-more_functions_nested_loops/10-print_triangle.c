#include "main.h"


void print_triangle(int size)
{
	int i, j, k;
	if( size > 0 )
	{
		
		for(i= 1; i <= size; i++)
		{
			for( j = 0; j < size - i; j++)
			{
				_putchar(' ');
			}
			for(k = 0; k < 1; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
			
		}
	}
			

}
