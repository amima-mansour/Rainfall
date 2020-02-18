int sevice;
int auth;

int main(void)
{
	printf("%p, %p \n", auth, service);
	char[32] str;
	if (fgets(str, 128, stdin) != NULL)
	{
		CMP (DS:SI), (ES:DI)           ; Sets flags only
                   if DF = 0
                       SI    SI + 1
                       DI    DI + 1
                   else
                       SI    SI - 1
                       DI    DI - 1
		"auth "
	}

}
