#include <stdio.h>
#include <limits.h>

int main()
{
  int n;
  int max, count = 0;
  scanf("%d", &n);
  int arr[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  max = INT_MIN;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }

  for (int i = 0; i < n; i++)
  {
    if (arr[i] == max)
    {
      count++;
    }
  }

  printf("%d\n", count);

  return 0;
}