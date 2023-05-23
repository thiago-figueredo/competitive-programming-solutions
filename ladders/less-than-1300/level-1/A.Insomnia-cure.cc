#include <iostream>

using namespace std;

bool is_divisible_by(int x, int y) {
  return x % y == 0;
}

int solve(int k, int l, int m, int n, int d) {
  int count = 0;

  for (int i = 1; i <= d; ++i) {
    if (is_divisible_by(i, k) || is_divisible_by(i, l) || is_divisible_by(i, m) || is_divisible_by(i, n)) {
      count++;
    }
  }

  return count;
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int k, l, m, n, d;

  cin >> k >> l >> m >> n >> d;

  cout << solve(k, l, m, n, d);

  return 0;
}
