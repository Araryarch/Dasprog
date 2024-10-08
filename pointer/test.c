#include <stdio.h>

void tuker(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{
  int a = 10;
  int b = 20;

  tuker(&a, &b);

  printf("a = %d, b = %d\n", a, b);

  return 0;
}
