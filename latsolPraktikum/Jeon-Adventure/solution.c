#include <stdio.h>

int main()
{
  char code;
  int N, M;

  scanf("%c %d %d", &code, &N, &M);

  if (code == 'K')
  {
    if (N % M == 0)
    {
      printf("Bener Banget Cuy!");
    }
    else
    {
      printf("Bukan nih.");
    }
  }
  if (code == 'F')
  {
    if (M % N == 0)
    {
      printf("Bener Banget Cuy!");
    }
    else
    {
      printf("Bukan nih.");
    }
  }

  return 0;
}