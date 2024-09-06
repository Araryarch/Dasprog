#include <stdio.h>

int main()
{
  int a, b, t, g;
  scanf("%d %d", &a, &b);

  // T adalah Teman Teman dan G adalah Ghifari
  t = a / b;
  g = a % b;
  printf("Teman-teman mendapatkan %d potong :)\nGhifari mendapatkan %d potong :(", t, g);

  return 0;
}