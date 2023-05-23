#include <iostream>

using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  float volume = 0;

  cin >> n;

  for (int i = 0; i < n; ++i) {
    int percent;
    cin >> percent;

    volume += percent;
  }

  cout << volume / n;

  return 0;
}
