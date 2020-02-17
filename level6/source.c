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
	char *buff1 = (char*)malloc(64); 
	void (*f)(void);
	
	f = malloc(4);
	*f = m;
	strcpy(buff, av[1]); //to check
	f();
	return (0);
}
