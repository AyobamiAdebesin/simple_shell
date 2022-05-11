#include "main.h"

int main(void)
{
	char *buffer = NULL;
	size_t n = 0;
	size_t n_bytes_read;

	n_bytes_read = getline(&buffer, &n, stdin);

	printf("Number of characters read: %lu\n", n_bytes_read);
	printf("%s", buffer);

	free(buffer);

	return (0);
}
