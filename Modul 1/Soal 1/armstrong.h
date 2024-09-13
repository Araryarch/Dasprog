#include <stdio.h>
#include <math.h>

void armstrong(int num)
{
  if ((pow(num / 100, 3) + pow(num % 100 / 10, 3) + pow(num % 10, 3)) == num && num > 99)
  {
    printf("Bilangan Armstrong");
  }
  else
  {
    printf("Bukan Bilangan Armstrong");
  }
}