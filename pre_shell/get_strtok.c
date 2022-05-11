#include "main.h"

int main(void)
{
	char s[] = "Adebesin Ayobami Sodiq";
	const char *delim = " ";
	char *token;
	token = strtok(s, delim);

	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, delim);
	}

	return (0);
}	
