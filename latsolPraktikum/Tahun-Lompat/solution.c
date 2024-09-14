#include <stdio.h>

int main()
{
  int n, a, b, c;
  scanf("%d %d %d %d", &n, &a, &b, &c);
  (n % a == 0 && n % b != 0 || n % c == 0) ? printf("YES") : printf("NO");
  return 0;
}