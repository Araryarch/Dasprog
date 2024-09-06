#include <stdio.h>

// jika mau pakai Array

int main()
{
  int arr[5];
  int sum = 0;
  int length = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < length; i++)
  {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < length; i++)
  {
    sum += arr[i];
  }

  float avg = sum / (float)length;
  printf("%d %.1f", sum, avg);

  return 0;
}
