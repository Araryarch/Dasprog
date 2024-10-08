#include <stdio.h>
int main()
{
  int N, max;
  scanf("%d", &N);
  int array[N];
  for (int i = 0; i < N; i++)
  {
    scanf("%d", &array[i]);
  }
  max = array[0];
  for (int i = 1; i < N; i++)
  {
    if (array[i] > max)
    {
      max = array[i];
    }
  }
  printf("%d\n", max);
  return 0;
}
