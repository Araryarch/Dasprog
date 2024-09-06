#include <stdio.h>

const char *terbilang(int n)
{
  const char *satuan[] = {"nol", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};

  const char *belasan[] = {"sebelas", "dua belas", "tiga belas", "empat belas", "lima belas", "enam belas", "tujuh belas", "delapan belas", "sembilan belas"};

  const char *puluhan[] = {"sepuluh", "dua puluh", "tiga puluh", "empat puluh", "lima puluh", "enam puluh", "tujuh puluh", "delapan puluh", "sembilan puluh"};

  const char *ratusan[] = {"seratus", "dua ratus", "tiga ratus", "empat ratus", "lima ratus", "enam ratus", "tujuh ratus", "delapan ratus", "sembilan ratus"};

  if (n < 10)
  {
    return satuan[n];
  }
  if (n == 10)
  {
    return "sepuluh";
  }
  if (n > 10 && n < 20)
  {
    return belasan[n % 10 - 1];
  }
  if (n >= 20 && n < 100)
  {
    if (n % 10 == 0)
    {
      return puluhan[n / 10 - 1];
    }
    else
    {
      static char result[50];
      snprintf(result, sizeof(result), "%s %s", puluhan[n / 10 - 1], satuan[n % 10]);
      return result;
    }
  }
  if (n >= 100 && n < 1000)
  {
    if (n % 100 == 0)
    {
      return ratusan[n / 100 - 1];
    }
    else if (n % 100 < 10)
    {
      static char result[50];
      snprintf(result, sizeof(result), "%s %s", ratusan[n / 100 - 1], satuan[n % 100]);
      return result;
    }
    else if (n % 100 >= 10 && n % 100 < 20)
    {
      static char result[50];
      snprintf(result, sizeof(result), "%s %s", ratusan[n / 100 - 1], belasan[n % 100 - 11]);
      return result;
    }
    else
    {
      static char result[50];
      snprintf(result, sizeof(result), "%s %s %s", ratusan[n / 100 - 1], puluhan[(n % 100) / 10 - 1], satuan[n % 10]);
      return result;
    }
  }
  return "di luar jangkauan";
}

int main()
{
  int a = 0;
  scanf("%d", &a);
  const char *hasil = terbilang(a);
  printf("%s\n", hasil);
}
