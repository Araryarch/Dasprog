#include <stdio.h>
#include <string.h>

void hitung_vokal(const char *teks)
{
  int jumlah_A = 0, jumlah_I = 0, jumlah_U = 0, jumlah_E = 0, jumlah_O = 0;

  for (int i = 0; teks[i] != '\0'; i++)
  {
    char huruf = teks[i];

    switch (huruf)
    {
    case 'A':
    case 'a':
      jumlah_A++;
      break;
    case 'I':
    case 'i':
      jumlah_I++;
      break;
    case 'U':
    case 'u':
      jumlah_U++;
      break;
    case 'E':
    case 'e':
      jumlah_E++;
      break;
    case 'O':
    case 'o':
      jumlah_O++;
      break;
    default:
      break;
    }
  }

  printf("A/a : %d\n", jumlah_A);
  printf("I/i : %d\n", jumlah_I);
  printf("U/u : %d\n", jumlah_U);
  printf("E/e : %d\n", jumlah_E);
  printf("O/o : %d\n", jumlah_O);
}

int main()
{
  char teks[101];
  fgets(teks, 101, stdin);
  teks[strcspn(teks, "\n")] = '\0';

  hitung_vokal(teks);

  return 0;
}
