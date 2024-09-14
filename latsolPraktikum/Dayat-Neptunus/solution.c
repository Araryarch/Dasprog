#include <stdio.h>

int main()
{
  char P, Q;
  int valP, valQ;

  scanf("%c%c", &P, &Q);

  switch (P)
  {
  case 'I':
    valP = 1;
    break;
  case 'V':
    valP = 5;
    break;
  case 'X':
    valP = 10;
    break;
  case 'L':
    valP = 50;
    break;
  case 'C':
    valP = 100;
    break;
  default:
    valP = 0;
    break;
  }

  switch (Q)
  {
  case 'I':
    valQ = 1;
    break;
  case 'V':
    valQ = 5;
    break;
  case 'X':
    valQ = 10;
    break;
  case 'L':
    valQ = 50;
    break;
  case 'C':
    valQ = 100;
    break;
  default:
    valQ = 0;
    break;
  }

  int result = valP < valQ ? valQ - valP : valQ + valP;
  (result == 0) ? printf("Ini bukan kode yang dimaksud :(") : printf("%d", result);

  return 0;
}