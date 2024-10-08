#include <iostream>
#define ull unsigned long long

using std::cout, std::cin;

int main()
{
  ull N, M, F;
  cin >> N >> M >> F;
  if ((N | (F | ~F)) - 1 <= M)
    cout << "HAHAHA, I CAN SAVE THE WORLD";
  else
    cout << "NOOO, I FAILED";

  return 0;
}