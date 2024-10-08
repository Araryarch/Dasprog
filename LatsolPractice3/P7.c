#include <stdio.h>
#include <string.h>

int main()
{
  char str[1001];
  gets(str);

  int len = strlen(str);

  for (int i = 0; i < len; i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z')
    {
      str[i] -= 32;
    }
  }

  printf("%s", str);

  return 0;
}