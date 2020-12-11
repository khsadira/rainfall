#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int m = 0;

void p(char *buffer) {
  printf(buffer);
  return ;
}

void n() {
    char    buffer[512];

    fgets(buffer, 512, stdin);
    p(buffer);
    if (m == 16930116) {
        system("/bin/cat /home/user/level5/.pass");
    }
    return ;
}

int main() {
    n();
    return (0);
}
