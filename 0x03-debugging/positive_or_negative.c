#include<stdio.h>
/**
 * positive_or_negative - returns positive negative or zero value
 * @i: expected number to be checked
 */

void positive_or_negative(int i)
{

	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
