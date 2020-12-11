#include <stdio.h>

m = 0;

void o() {
  system("/bin/sh");
  exit(1);
}

void n() {
  char buffer[512];

  fgets(buffer, 512, stdin);
  printf(buffer);
  exit(1);
}

int main() {
  n();
  return(0) ;
}
