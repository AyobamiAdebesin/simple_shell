#include "main.h"

int main(void)
{
	char *buffer = NULL;
	size_t n = 0;
	int n_bytes_read;

	while(n_bytes_read != EOF)
	{
		display_prompt();
		n_bytes_read = getline(&buffer, &n, stdin);
		printf("Number of characters read: %i\n", n_bytes_read);
		printf("%s", buffer);
	}

	free(buffer);

	return (0);
}
