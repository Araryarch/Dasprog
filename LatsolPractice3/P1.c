#include <stdio.h>
#include <string.h>

int main()
{
  char str[101];
  gets(str);

  printf("%lu\n", strlen(str));

  return 0;
}
