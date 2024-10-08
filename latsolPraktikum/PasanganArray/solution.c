#include <stdio.h>
#define INT long long

int main()
{
  INT length, target;
  scanf("%lld", &length);
  INT arr[length];

  for (INT i = 0; i < length; i++)
  {
    scanf("%lld", &arr[i]);
  }

  scanf("%lld", &target);

  INT found = 0;
  INT first = -1, second = -1;

  for (INT i = 0; i < length - 1; i++)
  {
    for (INT j = i + 1; j < length; j++)
    {
      if (arr[i] + arr[j] == target)
      {
        first = i;
        second = j;
        found = 1;
        break;
      }
    }
    if (found)
      break;
  }

  if (found)
  {
    printf("%lld %lld\n", first, second);
  }
  else
  {
    printf("-1\n");
  }

  return 0;
}