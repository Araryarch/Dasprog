#include <stdio.h>

int main()
{
  int a, b, c, d, e;
  scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
  int sum = a + b + c + d + e;
  float avg = sum / (float)5;

  printf("%d %.1f", sum, avg);

  return 0;
}