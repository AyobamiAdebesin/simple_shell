#include "main.h"

void display_prompt(void)
{
	write(STDERR_FILENO, "$ ", 2);
}
