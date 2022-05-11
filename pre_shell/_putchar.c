#include "main.h"

int _putchar(char c)
{
	return(write(STDERR_FILENO, &c, 1));
}
