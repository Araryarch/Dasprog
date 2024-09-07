#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  int angka[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &angka[i]);
  }

  for (int i = n - 1; i >= 0; i--)
  {
    printf("%d\n", angka[i]);
  }

  return 0;
}
