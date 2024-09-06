#include <stdio.h>

// Fungsi untuk menampilkan sinyal seven-segment
void displaySegment(int digit)
{
  // Tabel seven-segment untuk angka 0-9
  int segments[10][7] = {
      {1, 1, 1, 1, 1, 1, 0}, // 0
      {0, 1, 1, 0, 0, 0, 0}, // 1
      {1, 1, 0, 1, 1, 0, 1}, // 2
      {1, 1, 1, 1, 0, 0, 1}, // 3
      {0, 1, 1, 0, 0, 1, 1}, // 4
      {1, 0, 1, 1, 0, 1, 1}, // 5
      {1, 0, 1, 1, 1, 1, 1}, // 6
      {1, 1, 1, 0, 0, 0, 0}, // 7
      {1, 1, 1, 1, 1, 1, 1}, // 8
      {1, 1, 1, 1, 0, 1, 1}  // 9
  };

  // Cetak sinyal seven-segment
  for (int i = 0; i < 7; i++)
  {
    printf("%d ", segments[digit][i]);
  }
  printf("\n");
}

// Fungsi untuk mengonversi biner menjadi desimal
int binaryToDecimal(int I1, int I2, int I3, int I4)
{
  return I1 * 8 + I2 * 4 + I3 * 2 + I4 * 1;
}

int main()
{
  int I1, I2, I3, I4;

  // Input nilai biner I1, I2, I3, I4
  scanf("%d %d %d %d", &I1, &I2, &I3, &I4);

  // Konversi biner ke desimal
  int digit = binaryToDecimal(I1, I2, I3, I4);

  // Tampilkan sinyal seven-segment
  displaySegment(digit);

  return 0;
}
