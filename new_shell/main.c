#include "main.h"
#include "source.h"
#include "parser.h"
#include "backend.h"

int main(__attribute__((unused)) int argc, __attribute__((unused)) char **argv)
{
	char *cmd;

	do
	{
		print_prompt1();
		cmd = read_cmd();

		if (!cmd)
		{
			exit(EXIT_SUCCESS);
		}

		if (cmd[0] == '\0' || strcmp(cmd, "\n") == 0)
		{
			free(cmd);
			continue;
		}

		if (strcmp(cmd, "exit\n") == 0)
		{
			free(cmd);
			break;
		}

		struct source_s src;
		src.buffer   = cmd;
		src.bufsize  = strlen(cmd);
		src.curpos   = INIT_SRC_POS;
		parse_and_execute(&src);

		free(cmd);

	}while(1);

	return (0);
}
