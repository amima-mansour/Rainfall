#include <stdio.h>
#include <string.h>

int p(void)
{
  void *addr;
  char str[76];

  fflush(stdout);
  gets(str);
  if ((addr & 0xb0000000) == 0xb0000000)
  {
    printf("(%p)\n", addr);
    _exit(1);
  }
  puts(str);
  strdup(str);
  return;
}

int main(void)
{
  p();
  return (0);
}
