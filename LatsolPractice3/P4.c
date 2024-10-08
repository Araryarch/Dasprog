#include <stdio.h>
#include <string.h>

void swap(char *a, char *b)
{
  char temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{
  char str[10001];
  if (fgets(str, sizeof(str), stdin) == NULL)
  {
    printf("Error reading input.\n");
    return 1;
  }

  str[strcspn(str, "\n")] = 0;

  int len = strlen(str);

  if (len < 4)
  {
    printf("%s\n", str);
    return 0;
  }

  for (int i = 0; i < len / 2; i += 2)
  {
    if (i / 2 < 2)
    {
      swap(&str[i], &str[len - 2 - i]);
      swap(&str[i + 1], &str[len - 1 - i]);
    }
  }

  printf("%s\n", str);
  return 0;
}
