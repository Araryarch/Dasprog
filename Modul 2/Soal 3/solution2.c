#include <stdio.h>

int isPrime(int number)
{
  if (number <= 1)
  {
    return 0;
  }
  for (int i = 2; i * i <= number; i++)
  {
    if (number % i == 0)
    {
      return 0;
    }
  }
  return 1;
}

int main()
{
  int number;
  scanf("%d", &number);
  for (int i = 2; i <= number; i++)
  {
    if (isPrime(i))
    {
      printf("* ");
    }
    else
    {
      printf("%d ", i);
    }
  }
  return 0;
}
