#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, amazing_performances = 0;

  cin >> n;

  int points[n] = { 0 };

  for (int i = 0; i < n; ++i) {
    cin >> points[i];

    if (i == 0) {
      continue;
    }

    int* max_point = max_element(points, points + i);
    int* min_point = min_element(points, points + i);

    if (points[i] > *max_point || points[i] < *min_point) {
      amazing_performances++;
    }
  }

  cout << amazing_performances;

  return 0;
}
