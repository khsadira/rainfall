#include <stdio.h>

char c[68];

void m() {
    int t = time((void *)0);
    printf("%s - %d", c, t);
    return ;
}

int main(int ac, char **av) {
    char *s1 = malloc(8);
    char *s2 = malloc(8);
    char *s3 = malloc(8);
    char *s4 = malloc(8);

    strcpy(s1, av[1]);
    strcpy(s2, av[2]);

    int fd = fopen("/home/user/level8/.pass", "r");
    fgets(c, 68, fd);
    puts("~~");
    return 0;
}