#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av) {
	if (atoi(av[1]) == 423) {
		char *path = strdup("/bin/sh");

		int uid = geteuid();
		int gid = getegid();
		
		setresgid(uid, uid, uid);
		setresuid(gid, gid, gid);
		
		execv(path, NULL);
	} else {
		fwrite("No !\n", 1, 5, 2);
	}
	return (0);
}
