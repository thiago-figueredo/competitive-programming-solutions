#include <iostream>
#include <string>

using namespace std;

int solve(string stones) {
  int n = 0;

  for (size_t i = 0; i < stones.size() - 1; ++i) {
    if (stones.at(i) == stones.at(i+1)) {
      n++;
    }
  }

  return n;
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;

  cin >> n;

  string stones(n, ' ');

  for (int i = 0; i < n; ++i) {
    cin >> stones[i];
  }

  cout << solve(stones);

  return 0;
}
