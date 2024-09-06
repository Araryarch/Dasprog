#include <stdio.h>
#define cekGenap(n) (n % 2 == 0 ? "Genap" : "Ganjil")

int main()
{
  int angka = 0;
  scanf("%d", &angka);
  printf("%s\n", cekGenap(angka));

  return 0;
}
