#include <stdio.h>
#include <math.h>

int main()
{
  int num, result;
  scanf("%d", &num);

  if ((pow(num / 100, 3) + pow(num % 100 / 10, 3) + pow(num % 10, 3)) == num)
  {
    printf("Bilangan Armstrong");
  }
  else
  {
    printf("Bukan Bilangan Armstrong");
  }
  return 0;
}