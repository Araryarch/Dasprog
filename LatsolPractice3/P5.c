#include <stdio.h>
#include <string.h>

int main()
{
  int size;

  scanf("%d", &size);

  char result[2003] = "";
  char temp[1001];

  for (int i = 0; i < size; i++)
  {
    scanf("%s", temp);
  }

  printf("%s\n", temp);

  return 0;
}
