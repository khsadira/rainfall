#include <string.h>
#include <stdio.h>

int language = 0;

int greetuser(char *msg)
{
  char str[20];

  if (language == 1)
    strcpy(str, "Hyvää päivää ");
  else if (language == 2)
    strcpy(str, "Goedemiddag! ");
  else if (language == 0)
    strcpy(str, "Hello! ");

  strcat(str, msg);
  return puts(str);
}

int main(int argc,char **argv)
{
  char s1[40];
  char s2[32];
  char *lang;

  if (argc == 3)
  {
    strncpy(s1, argv[1], 40);
    strncpy(s2, argv[2], 32);

    lang = getenv("LANG");
    if (lang)
    {
      if (memcmp(lang, "fi", 2) == 0)
        language = 1;
      else if (memcmp(lang, "nl", 2) == 0)
          language = 2;
    }
    return greetuser(argv[1]);
  }
  return 1;
}