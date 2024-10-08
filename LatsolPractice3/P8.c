#include <stdio.h>
#include <string.h>

int main()
{
  char str[101];
  gets(str);

  for (int i = 0; i < strlen(str); i++)
  {
    if (i == 0 || str[i - 1] == ' ')
    {
      if (str[i] >= 'a' && str[i] <= 'z')
      {
        str[i] -= 32;
      }
    }
    else
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
      {
        str[i] += 32;
      }
    }
  }

  for (int i = 0; i < strlen(str); i++)
  {
    if (str[i] == ' ')
    {
      for (int j = i; j < strlen(str); j++)
      {
        str[j] = str[j + 1];
      }
      i--;
    }
  }

  printf("%s\n", str);

  return 0;
}