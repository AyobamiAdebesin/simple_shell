#include "main.h"

int main(__attribute__((unused)) int ac, char *argv[])
{
	int i = 1;

	while (argv[i] != NULL)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
