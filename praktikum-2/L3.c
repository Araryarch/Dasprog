#include <stdio.h>
#include <limits.h>

int main()
{

  int t;
  scanf("%d", &t);

  printf("%d", max);

  int arr[t];
  int freq[200001] = {0};

  for (int i = 0; i < t; i++)
  {
    scanf("%d", &arr[i]);
    freq[arr[i] + 100000]++;
  }

  int mode = 0;
  int max = 0;

  for (int i = 0; i <= 200000; i++)
  {
    if (freq[i] > max)
    {
      max = freq[i];
      mode = i - 100000;
    }
    else if (freq[i] == max && (i - 100000) > mode)
    {
      mode = i - 100000;
    }
  }

  int prime = 1;

  if (mode <= 1)
  {
    prime = 0;
  }
  else
  {
    for (int i = 2; i * i <= mode; i++)
    {
      if (mode % i == 0)
      {
        prime = 0;
        break;
      }
    }
  }

  printf("Modus: %d\n", mode);
  if (prime)
  {
    printf("Wah, modusnya prima nihh.\n");
  }
  else
  {
    printf("Yah, modusnya gak prima.\n");
  }

  return 0;
}
