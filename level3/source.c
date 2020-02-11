initialiser:
unsigned int m; (address: 0x804988c)
function v:
char[520] *s;
fgets(buff, 512, stdin)
printf(buff)
if (m == 64)
{
	//fwrite( buffer, BLOCK_SIZE, 1, stream )
	fwrite("Whait what?!\n", 1, 12, stdout);
	system(/bin/sh);
}
return ;
function main:
int main()
{
	v();
	return ;
}
