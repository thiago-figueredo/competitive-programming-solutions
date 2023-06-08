#include<bits/stdc++.h>

using namespace std;

enum Directions {
  LEFT = 0,
  RIGHT,
  UPPER,
  DOWN,
};

bool is_right_neighbor(pair<int, int> a, pair<int, int> b) {
  return a.first > b.first && a.second == b.second;
}

bool is_left_neighbor(pair<int, int> a, pair<int, int> b) {
  return a.first < b.first && a.second == b.second;
}

bool is_lower_neighbor(pair<int, int> a, pair<int, int> b) {
  return a.first == b.first && a.second < b.second;
}

bool is_upper_neighbor(pair<int, int> a, pair<int, int> b) {
  return a.first == b.first && a.second > b.second;
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, count = 0;

  cin >> n;
  
  pair<int, int> points[n];
  unordered_map<int, unordered_map<int, bool>> neighbors;

  for (int i = 0; i < n; ++i) {
    cin >> points[i].first >> points[i].second;
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (i == j) {
        continue;
      }

      if (is_right_neighbor(points[j], points[i])) {
        neighbors[i][RIGHT] = true;
      }
      
      if (is_left_neighbor(points[j], points[i])) {
        neighbors[i][LEFT] = true;
      }

      if (is_upper_neighbor(points[j], points[i])) {
        neighbors[i][UPPER] = true;
      }
      
      if (is_lower_neighbor(points[j], points[i])) {
        neighbors[i][DOWN] = true;
      }
    }
  }

  for (auto [_, neighbor] : neighbors) {
    if (neighbor[LEFT] && neighbor[RIGHT] && neighbor[UPPER] && neighbor[DOWN]) {
      count++;
    }
  }

  cout << count;

  return 0;
}
