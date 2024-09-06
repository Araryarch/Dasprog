#include <stdio.h>
#include <math.h> // Untuk fungsi pow

int main()
{
  int num;
  int originalNum;
  int arms = 0;

  scanf("%d", &num);

  originalNum = num;

  int digits[10];
  int i = 0;

  // Ekstrak digit dari num
  while (num > 0)
  {
    digits[i] = num % 10;
    num /= 10;
    i++;
  }

  for (int j = 0; j < i; j++)
  {
    arms += pow(digits[j], i);
  }

  if (arms == originalNum)
  {
    printf("Merupakan Bilangan Armstrong");
  }
  else
  {
    printf("Bukan Merupakan Bilangan Armstrong");
  }

  return 0;
}
