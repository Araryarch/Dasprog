#include <stdio.h>

int find_number(int n)
{
  if (n == 1)
  {
    return 1;
  }
  return find_number(n - 1) + (n * (n + 1)) / 2;
}

int main()
{
  int n;
  printf("Masukkan bilangan ke-n: ");
  scanf("%d", &n);

  if (n < 1)
  {
    printf("Bilangan n harus lebih besar dari 0.\n");
    return 1;
  }

  printf("Bilangan ke-%d adalah %d\n", n, find_number(n));
  return 0;
}
