#include <stdio.h>

int main()
{
  int N;
  int matrix[100][100];
  long long diagonal = 0;
  long long secDiagonal = 0;

  scanf("%d", &N);

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      scanf("%d", &matrix[i][j]);
    }
  }

  for (int i = 0; i < N; i++)
  {
    diagonal += matrix[i][i];
    secDiagonal += matrix[i][N - 1 - i];
  }

  printf("%lld %lld\n", diagonal, secDiagonal);

  return 0;
}