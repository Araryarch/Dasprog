#include <stdio.h>
#include <math.h>

void armstrong(int num)
{
  ((pow(num / 100, 3) + pow(num % 100 / 10, 3) + pow(num % 10, 3)) == num && num > 99) ? printf("Merupakan Bilangan Armstrong") : printf("Bukan Bilangan Armstrong");
}
