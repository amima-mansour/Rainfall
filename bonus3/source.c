#include <stdio.h> /* fopen, fread, fclose */
#include <stdlib.h> /* atoi */
#include <unistd.h> /* puts */
#include <string.h> /*strcmp */

int main(int argc,char **argv)
{
    FILE *fs;
    char buffer[24];
	char buffer2[66];

	fs = fopen("/home/user/end/.pass","r");
	bzero(buffer, 33);
	if (!fs || argc != 2)
        return -1;

    fread(buffer, 1, 66, fs);
    buffer[atoi(argv[1])] = 0;

    fread(buffer2, 1, 65, fs);
    fclose(fs);

    if (strcmp(buffer argv[1]) == 0)
        execl("/bin/sh","sh",0);
    else
        puts(buffer2);
    return 0;
}
