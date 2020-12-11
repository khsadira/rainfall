#include <stdio.h>

char    *auth = NULL;
char    *service = NULL;

int main(int ac, char **av) {
    
    char buf[128];
    while (1) {
        printf("%p, %p \n", auth, service);

        fgets(buf, 128, stdin);

        if (strncmp(buf, "auth", 4) == 0) {
            if (strlen(buf + 4) <= 30 && strlen(buf) > 5) {
                auth = malloc(4);
                strcpy(auth, buf+4);
            }
        }
        
        if (strncmp(buf, "reset", 5) == 0) {
            free(auth);
        }

        if (strncmp(buf, "service", 7) == 0) {
            service = strdup(buf + 7);
        }

        if (strncmp(buf, "login", 5) == 0) {
            if (*(auth + 32) == *service) {
                system("/bin/sh");
            } else {
                fwrite("Password:\n", 1,10,stdout);
            }
        }
    }
    return 0;
}