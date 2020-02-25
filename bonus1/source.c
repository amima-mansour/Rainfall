#include <string.h> //memcpy
#include <unistd.h> //excel
#include <stdlib.h> //atoi

int main(int argc, char **argv)
{
	int			a;
	char[40]	str; //0x3c - 0x14 = 60 - 20 = 40

	a = atoi(argv[1]);
	if (a >= 10)
		return (1);
	memcpy(str, argv[2], a * 4);
	if (a ==  1464814662)
		excel("/bin/sh","sh", 0);
	return (0);
}
