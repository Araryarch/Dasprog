#include <stdio.h>
#include <string.h>

int main()
{
  char str[1001];
  int extnd;

  gets(str);
  scanf("%d", &extnd);

  extnd = extnd % 26;
  if (extnd < 0)
  {
    extnd += 26;
  }

  int len = strlen(str);
  for (int i = 0; i < len; i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z')
    {
      str[i] = (((str[i] - 'a' + extnd) % 26) + 'a');
    }
    else if (str[i] >= 'A' && str[i] <= 'Z')
    {
      str[i] = (((str[i] - 'A' + extnd) % 26) + 'A');
    }
  }

  printf("%s\n", str);

  return 0;
}
