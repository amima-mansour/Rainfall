#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char *c;

void m(void)
{
	printf("%s - %d\n", c, time(0));
	return ;
}

int main(int argc, char **argv)
{
	char *s1 = malloc(8);
	*s1 = 1;
	char *s2 = malloc(8);
	char *s3 = malloc(8);
	*s3 = 2;
	char *s4 = malloc(8);
	strcpy(s1 + 1, argv[1]);
	strcpy(s3 + 1, argv[2]);
	File *f = fopen("/home/user/level8/.pass", "r");
	fgets(c, 68, f);
	fputs("~~");
	return (0);
}
