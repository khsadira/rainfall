#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void n() {
  system("/bin/cat /home/user/level7/.pass");
  return ;
}

void m() {
  puts("Nope");
  return ;
}

int main(int argc, char **argv) {
  void *buff1 = malloc(64);
  void *buff2 = malloc(4);
  void (*pt)(void) = &m;

  strcpy(buff1,argv[1]);
  pt();
  return (0);
}