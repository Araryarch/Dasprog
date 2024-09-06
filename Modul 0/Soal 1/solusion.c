#include <stdio.h>

int main()
{
  int tahunAwal, tahunAkhir, umur;
  scanf("%d %d", &tahunAwal, &tahunAkhir);
  umur = tahunAkhir - tahunAwal;
  printf("%d", umur);

  return 0;
}