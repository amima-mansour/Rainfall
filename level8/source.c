#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *sevice = NULL;
char *auth = NULL;

int main(void)
{
	char str[128];

	while(1)
	{
		printf("%p, %p \n", auth, service);
		if (!fgets(str, 128, stdin))
			break ;
		if (strncmp(str, "auth ", 5) == 0)
		{
			auth = (char*)malloc(4);
			char *str1 = str + 5;
			if (strlen(str1) < 31)
				strcpy(auth, str1);
		}
		else if (strncmp(str, "reset", 5) == 0)
			free(auth);
		else (strncmp(str, "service", 6) == 0)
			service = strdup(str + 7);
		else if (strncmp(str, "login", 5) == 0)
		{
			if (*(auth + 32) != '\0')
				system("/bin/sh");
			else
				fwrite("Password:\n", 1, 10, stdout);
		}
	}
	return (0);
}
