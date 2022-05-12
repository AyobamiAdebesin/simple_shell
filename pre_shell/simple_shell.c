#include "main.h"

void display_prompt(void)
{
	write(STDERR_FILENO, "$ ", 2);
}

int _strlen(char *s)
{
	int i;

	for(i = 0; *(s+i) != '\0'; i++)
		;
	return (i);
}

void display_newline(void)
{
	write(STDERR_FILENO, "\n", 1);
}

char *get_input()
{
	char *line_ptr = NULL;
	size_t n = 0;
	int n_bytes_read;
	char *token;
	char *delimiter = " ";

	do
	{
		display_prompt();
		n_bytes_read = getline(&line_ptr, &n, stdin);
	}while(n_bytes_read != EOF);

	return(line_ptr);
}

char *tokenize_input(char *line_ptr)
{
	char *token;
	char *delimiter = " ";
	token = strtok(line_ptr, delimiter);
	char *argv[] = {};
	int i;

	while (token != NULL)
	{
		token = strtok(NULL, delimiter);
		if (execve(token, argv, NULL) == -1)
		{
			perror("No such command\n");
		}
	}
	
	/*
	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("No such command\n");
	}

	*/

	return (token);
}

int main(void)
{
	char *line_ptr;
	
	line_ptr = get_input();
	tokenize_input(line_ptr);

	free(line_ptr);
	return (0);
}	
