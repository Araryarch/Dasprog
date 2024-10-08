#include <stdio.h>
#include <string.h>
#define INT long long

//? Kasurrusak => kasurrusaK
//? kata awal == kata yang dibalik

int main()
{
  char s[1001];
  char reverse[1001];
  scanf("%s", s);

  INT len = strlen(s);

  printf("%d\n", len);

  for (INT i = 0; i < len; i++)
  {
    //? KaaAak => kaaaak
    if (s[i] >= 'A' && s[i] <= 'Z')
    {
      s[i] = s[i] + 32;
    }
  }
  //? s = "ASDJ" -> "JDSA"
  //? reverse = JDSA -> reverse[0] == s[terakhir]
  for (INT i = len; i > 0; i--)
  {
    reverse[len - i] = s[i - 1];
  }

  if (strcmp(s, reverse) == 0)
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }

  return 0;
}