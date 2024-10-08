#include <stdio.h>

char *alphabet_position(char *text)
{
  char *str = malloc(strlen(text) * 3);
  str[0] = 0;
  int k = 0;
  while (*text)
  {
    if (*text > 64)
      k += sprintf(str + k, "%d ", *text & 31);
    text++;
  }
  str[k - 1] = 0;
  return str;
}