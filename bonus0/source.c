void    p(char *entry, char *to_print)
{
    char buffer[4096];

    puts(to_print);
    read(0, buffer, 4096);
    *strchr(buffer,"\n") = '\0';
    strncpy(entry, buffer, 20);
}

void    pp(char *a)
{
    char    input1[20];
    char    input2[28];

    p(input1, " - ");
    p(input2, " - ");
    strcpy(a, input1);
    a[strlen(a)] = " ";
    strcat(a, input2);
    return (a);
}

int     main(void)
{
    char *res;

    pp(res);
    puts(res);
    return 0;
}