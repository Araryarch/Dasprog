#include <stdio.h>
#include <string.h>

int main()
{
  int N;
  scanf("%d", &N);

  while (N--)
  {
    char str1[101], str2[101];
    scanf("%s %s", str1, str2);

    if (strcmp(str1, str2) == 0)
    {
      printf("Sama\n");
    }
    else
    {
      printf("Berbeda\n");
    }
  }

  return 0;
}
