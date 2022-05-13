#include "main.h"

void print_prompt1(void)
{
	write(STDERR_FILENO, "$ ", 2);
}

void print_prompt2(void)
{
	write(STDERR_FILENO, "> ", 2);
}


