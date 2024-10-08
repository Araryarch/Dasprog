#include <bits/stdc++.h>
#define INT long long

using namespace std;

int main()
{
  INT n, a, b, c, x;
  cin >> n >> a >> b >> c >> x;

  INT totalDamage = 0;

  if (b >= a && b >= c)
  {
    totalDamage = b * n;
  }
  else
  {
    totalDamage = b * x;
    INT sisa = n - x;
    INT damageTertinggi = max(a, c);
    cout << damageTertinggi << endl;

    totalDamage += damageTertinggi * sisa;
  }
  cout << totalDamage << endl;

  return 0;
}