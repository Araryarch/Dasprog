#include <stdio.h>

int main()
{
  char str[101];
  gets(str);

  int len = strlen(str);

  for (int i = len; i > 0; i--)
  {
    printf("%c", str[i - 1]);
  }

  return 0;
}