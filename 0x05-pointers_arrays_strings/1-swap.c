#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap the values of two given integer variables
 * @a: the first parameter
 * @b: the second parameter
 */


void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;

	*b = temp;
}
