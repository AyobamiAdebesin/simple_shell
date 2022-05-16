#include "main.h"
#include "source.h"
#include <errno.h>

void unget_char(struct source_s *src)
{
	if(src->curpos < 0)
	{
		return ;
	}

	src->curpos--;
}
:x

