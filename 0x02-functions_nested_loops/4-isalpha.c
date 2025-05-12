/*function that checks for alphabetic character.*/

#include <stdio.h>
#include "main.h"

int _isalpha(int c)
{
	char ch = 'a';
	char alp = 'A';

	if ( (c >= ch && c <= 'z' ) || (c >= alp && c <= 'Z'))
	{
		return 1;
	}
	return 0;
}
