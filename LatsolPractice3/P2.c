#include <stdio.h>
#include <string.h>

int main()
{
  char str[101];
  int count = 0;
  gets(str);
  int len = strlen(str);

  for (int i = 0; i < len; i++)
  {
    if (str[i] >= 'A' && str[i] <= 'Z')
    {
      str[i] = str[i] + 32;
    }
  }
  for (int i = 0; i < len; i++)
  {
    if (str[i] == 'a' || str[i] == 'i' || str[i] == 'u' || str[i] == 'e' || str[i] == 'o')
    {
      count++;
    }
  }

  printf("%d", count);

  return 0;
}
