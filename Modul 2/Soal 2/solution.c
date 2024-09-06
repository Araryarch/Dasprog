#include <stdio.h>

int main()
{
  int number = 0;
  scanf("%d", &number);

  for (int i = 1; i <= number; i++)
  {
    if (i % 2 == 0)
    {
      printf(" %c ", '*');
    }
    else
    {
      printf("%d", i);
    }
  }

  return 0;
}
