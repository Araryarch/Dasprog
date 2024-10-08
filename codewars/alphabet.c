#include <stdio.h>

char moveTen(char *str)
{
  //? a -> 97, z -> 122

  char move = ((*str - 'a' + 10) % 26) + 'a';
  return move;
}

int main()
{
  char result = moveTen('a');
  printf("%c", result);

  return 0;
}