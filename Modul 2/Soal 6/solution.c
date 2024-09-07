#include <stdio.h>
#include <string.h>

void textToCamel(const char *nama, char *hasil)
{
  int i = 0, j = 0;
  int underscore = 0;

  while (nama[i] != '\0')
  {
    if (nama[i] == '_')
    {
      underscore = 1;
    }
    else
    {
      if (underscore)
      {
        hasil[j++] = (nama[i] >= 'a' && nama[i] <= 'z') ? (nama[i] - 32) : nama[i];
        underscore = 0;
      }
      else
      {
        hasil[j++] = (nama[i] >= 'A' && nama[i] <= 'Z') ? (nama[i] + 32) : nama[i];
      }
    }
    i++;
  }
  hasil[j] = '\0';
}

int main()
{
  char nama[100];
  char hasil[100];

  scanf("%s", nama);

  textToCamel(nama, hasil);

  printf("%s\n", hasil);

  return 0;
}
