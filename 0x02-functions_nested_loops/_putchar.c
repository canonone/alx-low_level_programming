#include"main.h"
#include<unistd.h>

/**
 * _putchar write the character to th stdout
 * return 1 on success
 */
int _putchar(char c)
{
	return(write(1, &c, 1));

}
