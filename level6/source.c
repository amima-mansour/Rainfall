#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void m(void)
{
	puts("Nope");
	return ;
}

void n(void)
{
	system("/bin/cat /home/user/level7/.pass");
	return ;
}

int main(int ac, char **av)
{
	char *buff;
	void (*f)(void);
	
	buff = (char*)malloc(64);
	f = (void**)malloc(4);
	*f = m;
	strcpy(buff, av[1]);
	f();
	return (0);
}
