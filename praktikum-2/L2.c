#include <stdio.h>
#include <string.h>

int main()
{
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    char command[10], strA[1001], strB[1001];
    int countA[26] = {0}, countB[26] = {0};
    int isAnagram = 1, isFlip = 1;

    scanf("%s %s %s", command, strA, strB);

    int lenA = strlen(strA);
    int lenB = strlen(strB);

    if (strcmp(command, "FLIP") == 0)
    {
      if (lenA != lenB)
      {
        isFlip = 0;
      }
      else
      {
        for (int j = 0; j < lenA; j++)
        {
          if (strA[j] != strB[lenA - j - 1])
          {
            isFlip = 0;
            break;
          }
        }
      }

      if (isFlip)
      {
        printf("Flip %s to get %s\n", strA, strB);
      }
      else
      {
        printf("This cannot lah bro\n");
      }
    }
    else if (strcmp(command, "ANAGRAM") == 0)
    {
      if (lenA != lenB)
      {
        isAnagram = 0;
      }
      else
      {
        for (int j = 0; j < lenA; j++)
        {
          countA[strA[j] - 'a']++;
          countB[strB[j] - 'a']++;
        }

        for (int j = 0; j < 26; j++)
        {
          if (countA[j] != countB[j])
          {
            isAnagram = 0;
            break;
          }
        }
      }

      if (isAnagram)
      {
        printf("Hhm %s can be arranged into %s\n", strA, strB);
      }
      else
      {
        printf("This cannot lah bro\n");
      }
    }
  }

  return 0;
}