#include <stdio.h>
#include <stdlib.h>

int m; //global variable (address: 0x804988c)

void v()
{
	//0x208
	char[520] s;

	//0x200
	fgets(buff, 512, stdin)
	printf(buff)

	//0x40
	if (m == 64)
	{
		//fwrite( buffer, BLOCK_SIZE, 1, stream)
		fwrite("Whait what?!\n", 1, 12, stdout);
		system("/bin/sh");
	}
	return;
}

int main()
{
	v();
	return;
}
