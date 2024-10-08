#include <stdio.h>
#include <string.h>

int main()
{
  char str[1001];
  char same[1001];

  gets(str);
  gets(same);

  if (strstr(str, same) == 0)
  {
    printf("Not Found\n");
  }
  else
  {
    printf("Found\n");
  }

  return 0;
}