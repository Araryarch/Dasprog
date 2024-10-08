#include <stdio.h>

int main()
{
  long long N, M, F;
  scanf("%lld %lld %lld", &N, &M, &F);

  long long K = 0;
  long long maxTravel = N - 1;

  for (int i = 63; i >= 0; i--)
  {
    long long mask = 1LL << i;
    long long newK = K | mask;
    if (newK <= F)
    {
      long long travel = (N ^ newK) - 1;
      if (travel > maxTravel)
      {
        K = newK;
        maxTravel = travel;
      }
    }
  }

  if (maxTravel >= M)
  {
    printf("HAHAHA, I CAN SAVE THE WORLD\n");
  }
  else
  {
    printf("OH NOOO, I FAILED\n");
  }

  return 0;
}