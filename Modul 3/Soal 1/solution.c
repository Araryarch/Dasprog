#include <stdio.h>

int faktorial(int n)
{
  if (n == 0 || n == 1)
  {
    return 1;
  }
  return n * faktorial(n - 1);
}

int main()
{
  int number = 0;
  scanf("%d", &number);

  int result = faktorial(number);

  printf("%d\n", result);
}
