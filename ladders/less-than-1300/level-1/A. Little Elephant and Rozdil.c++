#include<bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  pair<int, int> min_distance = { INT_MAX, 0 };

  cin >> n;

  int distances[n];

  for (int i = 0; i < n; ++i) {
    cin >> distances[i];

    if (distances[i] < min_distance.first) {
      min_distance = { distances[i], i };
    }
  }

  for (int i = 0; i < n; ++i) {
    if (i != min_distance.second && min_distance.first == distances[i]) {
      cout << "Still Rozdil";
      exit(EXIT_SUCCESS);
    }
  }

  cout << min_distance.second + 1;

  return EXIT_SUCCESS;
}