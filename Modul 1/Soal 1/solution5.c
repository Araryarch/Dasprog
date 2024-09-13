#include <stdio.h>

int main()
{
  int num, ratusan, puluhan, satuan;
  scanf("%d", &num);

  ratusan = num / 100;
  puluhan = num % 100 / 10;
  satuan = num % 10;

  if ((ratusan * ratusan * ratusan) + (puluhan * puluhan * puluhan) + (satuan * satuan * satuan) == num && num == 1)
  {
    printf("Merupakan Bilangan Armstrong");
  }
  else
  {
    printf("Bukan Bilangan Armstrong");
  }
  return 0;
}
