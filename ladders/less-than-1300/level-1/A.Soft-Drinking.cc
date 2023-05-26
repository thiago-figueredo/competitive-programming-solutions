#include <iostream>

using namespace std;

int main(void) {
  int n, k, l, c, d, p, nl, np;

  cin >> n >> k >> l >> c >> d >> p >> nl >> np;

  int drinks = (k * l) / nl;
  int limes = c * d;
  int salts = p / np;
  int friends_toast = min(drinks, min(limes, salts)) / n;

  cout << friends_toast;

  return 0;
}