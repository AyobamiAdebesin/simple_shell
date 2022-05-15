#include "main.h"

char *read_cmd(void)
{
	char buff[1024];
	char *ptr = NULL;
	char ptrlen = 0;

	while(fgets(buf, 1024, stdin))
	{
		int buflen = strlen(buf);

		if (ptr == NULL)
		{
			ptr = malloc(buflen + 1);
		}
		else
		{
			char *ptr2 = realloc(ptr, ptrlen + buflen + 1);

			if (ptr2)
			{
				ptr = ptr2;
			}
			else
			{
				free(ptr);
				ptr = NULL;
			}
		}

		if(!ptr)
		{
			fprintf(stderr, "error:failed to alloc buffer: %s\n", strerror(errno));
			return NULL;
		}

		strcpy(ptr + ptrlen, buf);

		if (buf[buflen -1] == '\n')
		{
			if (buflen == 1 || buf[buflen -2] != '\\')
			{
				return ptr;
			}

			ptr[ptrlen + buflen-2] = '\0';
			buflen -= 2;
			print_prompt2();
		}

		ptrlen += buflen;
	}

	return ptr;
}

