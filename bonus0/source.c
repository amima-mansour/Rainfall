#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char *p(char *str1, char *str2)
{
	char [4104]str2;
	
	puts(str1);
	read(0, &str2, 4096);
	*strchr(str1, 10) = 0;
	return strncpy(str1, str3, 20);
}

void pp(char *str)
{
	char [20]str1; //x30 - x1c = 48 - 28 = 20 
	char [20]str2; //x1c - x08 = 28 - 8 = 20
	
	p(str1, " - ");
	p(str2, " - ");
	strcpy(str, str1);
	str[strlen(str)] = 32; //to check (gdb) x/x 0x80486a4
						   //0x80486a4:	0x20 = 32
	strcat(str, str2);
	return (str);
}

int main(void)
{
	char [42]str; //64 - 22

	pp(str);
	puts(str);
	return (0);
}
