#include <iostream>

using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, peoples = 0, capacity = 0;

  cin >> n;

  for (int i = 0; i < n; ++i) {
    int a, b;
    cin >> a >> b;

    peoples = i == 0 ? b : (peoples - a) + b;

    if (peoples > capacity) {
      capacity = peoples;
    }
  }

  cout << capacity;

  return 0;
}
