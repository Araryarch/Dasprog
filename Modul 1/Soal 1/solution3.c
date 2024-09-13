#include <stdio.h>
#include <math.h>
#define armstrong(num) \
  ((pow(num / 100, 3) + pow(num % 100 / 10, 3) + pow(num % 10, 3)) == num) ? printf("Bilangan Armstrong") : printf("Bukan Bilangan Armstrong");

int main()
{
  int num, result;
  scanf("%d", &num);

  armstrong(num);
  return 0;
}