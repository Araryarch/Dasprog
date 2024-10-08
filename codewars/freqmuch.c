#include <stdio.h>

int main()
{
  int size, same, count = 0;
  scanf("%d %d", &size, &same);

  while (size--)
  {
    int num;
    scanf("%d", &num);

    if (same == num)
    {
      count++;
    }
  }

  printf("%d", count);

  return 0;
}