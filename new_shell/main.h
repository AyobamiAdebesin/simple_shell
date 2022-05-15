#ifndef _main_h_
#define _main_h_

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <limits.h>
#include <errno.h>
#include <unistd.h>

void print_prompt1(void);
void print_prompt2(void);
char *read_cmd(void);

#endif
