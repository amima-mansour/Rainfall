#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void p(char *buf, char *str)
{
	char str2[4104];

	puts(str);
	read(0, str2, 4096);
	*strchr(str1, 10) = 0; // 10 = '\n'
	strncpy(buf, str2, 20);
}

void pp(char *str)
{
	char [20]str1;
	char [28]str2;
	
	p(str1, " - ");
	p(str2, " - ");
	strcpy(str, str1);
	str[strlen(str)] = 32; // 32 = ' '
	strcat(str, str2);
}

int main(void)
{
	char [42]str;

	pp(str);
	puts(str);
	return (0);
}
