#include <stdio.h>

int main()
{
  int num;
  int originalNum;
  int arms = 0;

  scanf("%d", &num);

  originalNum = num;

  int digits[10];
  int digit = 0;

  // digit dari num contohnya 123 menjadi 1,2,3 agar bisa diubah setiap angka
  while (num > 0)
  {
    digits[digit] = num % 10;
    num /= 10;
    digit++;
  }

  // memangkatkan dan menjumlahkan dengan jumlah digit misal 153 menjadi 1^3 + 5^3 + 3^3
  for (int j = 0; j < digit; j++)
  {
    arms += pow(digits[j], digit);
  }

  // membandingkan hasil rumus armstrong di number aseli atau angka awal
  if (arms == originalNum)
  {
    // jika sama berarti armstrong jika beda brati engga
    printf("Merupakan Bilangan Armstrong");
  }
  else
  {
    printf("Bukan Merupakan Bilangan Armstrong");
  }

  return 0;
}
