#include <stdio.h>

int main()
{
  int N;
  scanf("%d", &N);

  if (N == 0)
  {
    printf("-1\n");
    return 0;
  }

  int fruitCount[11] = {0};
  int fruitID;

  for (int i = 0; i < N; i++)
  {
    scanf("%d", &fruitID);
    fruitCount[fruitID]++;
  }

  int maxCount = 0;
  int mayoritasIdx = -1;
  int seri = 0;

  for (int i = 1; i <= 10; i++)
  {
    if (fruitCount[i] > maxCount)
    {
      maxCount = fruitCount[i];
      mayoritasIdx = i;
      seri = 0;
    }
    else if (fruitCount[i] == maxCount)
    {
      seri = 1;
    }
  }

  if (seri)
  {
    printf("-1\n");
  }
  else
  {
    printf("%d\n", mayoritasIdx);
    printf("%d\n", N - maxCount);
  }

  return 0;
}