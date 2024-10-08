#include <stdio.h>
#include <string.h>

int main()
{
  char text[5000];
  scanf("%s", &text);
  char reverse[5000];

  int len = strlen(text);

  for (int i = 0; i < len; i++)
  {
    if (text[i] >= 'A' && text[i] <= 'Z')
    {
      text[i] += 32;
    }
  }

  for (int i = len; i >= 0; i--)
  {
    reverse[len - i] = text[i - 1];
  }

  if (strcmp(text, reverse) == 0)
  {
    printf("Palindrom cok");
  }
  else
  {
    printf("Bukan palindrom");
  }

  return 0;
}