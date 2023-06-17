#include<bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, i = 0, j = 0;
  pair<int, int> min_height = { INT_MAX, INT_MAX };

  cin >> n;

  int a[n];

  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  for (int index = 0; index < n; ++index) {
    int next_index = (index + 1) % n;
    int height_diff = abs(a[index] - a[next_index]);
    int min_diff = abs(min_height.first - min_height.second);

    if ((min_height.first == INT_MAX && min_height.second == INT_MAX) || height_diff < min_diff) {
      min_height = { a[index], a[next_index] };
      i = index + 1;
      j = next_index + 1;
    }
  }

  cout << i << " " << j;

  return EXIT_SUCCESS;
}