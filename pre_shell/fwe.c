#include "main.h"

int main(void)
{
	pid_t my_pid;
	pid_t child_pid1;
	pid_t child_pid2;
	pid_t child_pid3;
	pud_t child_pid4;
	pid_t child_pid5;

	int count;

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



		
