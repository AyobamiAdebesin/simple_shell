#include "main.h"

int main(void)
{
	char *buffer = NULL;
	size_t n = 0;
	int n_bytes_read;

	do
	{
		write(STDOUT_FILENO, "$ ", 2);
		n_bytes_read = getline(&buffer, &n, stdin);
		printf("Number of characters read: %i\n", n_bytes_read);
		printf("%s", buffer);
	}while(n_bytes_read != EOF);

	free(buffer);

	return (0);
}
