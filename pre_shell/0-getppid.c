#include "main.h"

int main(void)
{
	pid_t parent_pid = getppid();
	pid_t curr_pid = getpid();

	printf("Parent process id: %u\n", parent_pid);
	printf("Current process id: %u\n", curr_pid);

	return (0);
}
