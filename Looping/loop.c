#include <stdio.h>
#include <string.h>

#define String char

int main()
{
  String one[10];
  scanf("%s", &one);
  int len = strlen(one);

  printf("%s", one);
  return 0;
}