#include <stdio.h>
#include <stdlib.h>

int m;

void p(char *buf)
{
	printf(buf);
	return ;
}

void n(void)
{
	char[520] buf;

	fgets(buf, 512, stdin);
	p(buf);
	if (m == 0x1025544)
	{
		system("/bin/cat /home/user/level5/.pass")
	}
	return ;
}

int main(void)
{
	n();
	return ;
}
