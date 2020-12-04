#include <stdio.h>

void run(void) {
	fwrite("Good... Wait what?\n", 2, 19, 0);
	system("/bin/sh");
}

int main() {
	char ret[76];

	gets(ret);
}