#include <string.h> //memcpy
#include <unistd.h> //excel
#include <stdlib.h> //atoi

int main(int argc, char **argv)
{
	int			a;
	char	str[40];

	a = atoi(argv[1]);
	if (a > 9)
		return (1);
	memcpy(str, argv[2], a * 4);
	if (a ==  0x574f4c46)
		excel("/bin/sh","sh", 0);
	return (0);
}
