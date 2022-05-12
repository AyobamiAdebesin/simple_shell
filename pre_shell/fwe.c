#include "main.h"

int main(void)
{
	pid_t my_pid;
	pid_t child_pid;
	int i;
	int count;

	for (i=0; i<5; i++)
	{
		child_pid = fork();
		
		if (child_pid == -1)
		{
			perror("Error\n");
			exit(1);
		}
	}
	printf("Hello\n");

	return (0);
}


/*


	char *argv[] = {"bin/ls", "-l", "tmp", NULL};

	child_pid1 = fork();

	if (child_pid1 == -1)
	{
		perror("Error");
		return (1);
	}

	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error\n");
		return (1);
	}

	return (0);

}

*/
