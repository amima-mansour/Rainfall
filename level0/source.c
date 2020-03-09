#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	if (atoi(argv[1]) == 423)
	{
		char *shell;
		shell = strdup("/bin/sh");
		int gid = getegid();
		int uid = geteuid();
		setresgid(gid, gid, gid);
		setresuid(uid, uid, uid);
		execv("/bin/sh", &shell);
	}
	else
		fwrite("No !\n", 1, 5, stderr);
	return (0);
}
