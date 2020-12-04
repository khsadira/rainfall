#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void p() {
  char tab[76];
  int EAX;

  fflush(stdout);
  gets(tab);
  EAX = (int)(&tab + 80);
  if ((EAX & 0xb0000000) == 0xb0000000)
  {
    printf("(%p)\n", (void *)EAX);
    exit(1);
  }
  puts(tab);
  strdup(tab);
  return ;
}

int main() {
  p();
  return(0);
}
