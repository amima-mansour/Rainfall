#include <stdio.h>
#include <stdlib.h>


void o(void)
{
	system("/bin/sh");
	exit(1);
}

void n(void)
{
	char[520] buf;

	fgets(buf, 512, stdin);
	printf(buf);
	exit(1);
}

int main(void)
{
	n();
	return(0);
}
