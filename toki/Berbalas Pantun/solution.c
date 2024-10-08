#include <stdio.h>
#define INT long long

int main()
{
  INT n;
  scanf("%lld", &n);
  INT arr[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%lld", &arr[i]);
  }

  INT maxValue = 0, maxCount = 0;

  for (int i = 0; i < n; i++)
  {
    INT count = 0;
    for (int j = 0; j < n; ++j)
    {
      if (arr[j] == arr[i])
      {
        ++count;
      }
    }

    if (count > maxCount)
    {
      maxCount = count;
      maxValue = arr[i];
    }
  }

  INT batas = n / 2;

  if (maxCount > batas)
  {
    printf("%lld\n", maxValue);
  }
  else
  {
    printf("Tidak ada mayoritas");
  }

  return 0;
}