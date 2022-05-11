#include "main.h"

int main(void)
{
	char *argv[] = {"jims", "jams", NULL};

	char *const envp[] = {"some", "environment", NULL};

	printf("Main program before execve");
	if (execve("./getppid", argv, envp) == -1)
		perror("Could not execve");
	return (0);

}	
