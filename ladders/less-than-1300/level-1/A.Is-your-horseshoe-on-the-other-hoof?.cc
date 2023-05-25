#include <iostream>
#include <unordered_map>

using namespace std;

#define HORSE_SHOE_AMOUNT 4

int solve(int colors[]) {
  int equal_colors = 0;
  unordered_map<int, int> m;

  for (int i = 0; i < HORSE_SHOE_AMOUNT; ++i) {
    int color = colors[i];

    if (m.find(color) == m.end()) {
      m[color] = 1;
      continue;
    }

    m[color] += 1;
  }

  for (auto pair : m) {
    if (pair.second > 1) {
      equal_colors += pair.second - 1;
    }
  }

  return equal_colors;
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int colors[HORSE_SHOE_AMOUNT] = {0};

  for (int i = 0; i < HORSE_SHOE_AMOUNT; ++i) {
    cin >> colors[i];
  }

  cout << solve(colors);

  return 0;
}
