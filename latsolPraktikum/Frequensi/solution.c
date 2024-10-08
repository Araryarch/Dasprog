#include <stdio.h>
#define INT long long

int main()
{
  INT n, num, count = 0;
  scanf("%lld %lld", &n, &num);

  while (n--)
  {
    INT arr;
    scanf("%lld", &arr);

    if (arr == num)
    {
      count++;
    }
  }

  printf("%lld\n", count);

  return 0;
}