#include <stdio.h>

int main()
{
  int angka;
  scanf("%d", &angka);

  // Mendapatkan ratusan, puluhan, dan satuan
  int ratusan = angka / 100;
  int puluhan = (angka % 100) / 10;
  int satuan = angka % 10;

  // Menampilkan ratusan
  switch (ratusan)
  {
  case 1:
    printf("seratus ");
    break;
  case 2:
    printf("dua ratus ");
    break;
  case 3:
    printf("tiga ratus ");
    break;
  case 4:
    printf("empat ratus ");
    break;
  case 5:
    printf("lima ratus ");
    break;
  case 6:
    printf("enam ratus ");
    break;
  case 7:
    printf("tujuh ratus ");
    break;
  case 8:
    printf("delapan ratus ");
    break;
  case 9:
    printf("sembilan ratus ");
    break;
  }

  // Menampilkan puluhan dan satuan
  // if (ratusan != 0 && (puluhan != 0 || satuan != 0))
  // {
  //   printf("dan ");
  // }

  if (puluhan == 1)
  {
    switch (satuan)
    {
    case 0:
      printf("sepuluh");
      break;
    case 1:
      printf("sebelas");
      break;
    case 2:
      printf("dua belas");
      break;
    case 3:
      printf("tiga belas");
      break;
    case 4:
      printf("empat belas");
      break;
    case 5:
      printf("lima belas");
      break;
    case 6:
      printf("enam belas");
      break;
    case 7:
      printf("tujuh belas");
      break;
    case 8:
      printf("delapan belas");
      break;
    case 9:
      printf("sembilan belas");
      break;
    }
  }
  else
  {
    switch (puluhan)
    {
    case 2:
      printf("dua puluh ");
      break;
    case 3:
      printf("tiga puluh ");
      break;
    case 4:
      printf("empat puluh ");
      break;
    case 5:
      printf("lima puluh ");
      break;
    case 6:
      printf("enam puluh ");
      break;
    case 7:
      printf("tujuh puluh ");
      break;
    case 8:
      printf("delapan puluh ");
      break;
    case 9:
      printf("sembilan puluh ");
      break;
    }

    switch (satuan)
    {
    case 1:
      printf("satu");
      break;
    case 2:
      printf("dua");
      break;
    case 3:
      printf("tiga");
      break;
    case 4:
      printf("empat");
      break;
    case 5:
      printf("lima");
      break;
    case 6:
      printf("enam");
      break;
    case 7:
      printf("tujuh");
      break;
    case 8:
      printf("delapan");
      break;
    case 9:
      printf("sembilan");
      break;
    }
  }

  printf("\n");
  return 0;
}
