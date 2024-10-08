#include <stdio.h>

int main()
{
  int r, c;
  scanf("%d %d", &r, &c);

  int a[r][c], transpose[c][r];

  for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j)
    {
      scanf("%d", &a[i][j]);
    }

  for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j)
    {
      transpose[j][i] = a[i][j];
    }

  for (int i = 0; i < c; ++i)
  {
    for (int j = 0; j < r; ++j)
    {
      printf("%d ", transpose[i][j]);
    }
    printf("\n");
  }

  return 0;
}
