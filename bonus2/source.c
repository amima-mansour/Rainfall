#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int language = 0;

int greetuser(char *input)
{
  char str[20]; // to check

  if (language == 1)
    strcpy(str, "Hyvää päivää ");
  else if (language == 2)
    strcpy(str, "Goedemiddag! ");
  else if (language == 0)
    strcpy(str, "Hello ");

  strcat(str, input);
  return puts(str);
}

int main(int argc,char **argv)
{
  char str[72];
  char *lang;

  if (argc != 3)
	  return (1);
  strncpy(str, argv[1], 40);
  strncpy(&str[40], argv[2], 32);
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
