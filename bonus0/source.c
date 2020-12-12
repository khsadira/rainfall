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
    char    *input1;
    char    *input2;

    p(input1, " - ");
    p(input2, " - ");
    strcpy(res, input1);
    ?????
    res = res + " "
    ?????
    strcat(res, input2);
}

int     main(void)
{
    char *res;

    pp(res);
    puts(res);
    return 0;
}