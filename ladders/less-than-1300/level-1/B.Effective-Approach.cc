#include <unordered_map>
#include <algorithm>
#include <iostream>

using namespace std;

#define ll long long

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m;

  cin >> n;

  unordered_map<int, int> indexes;

  indexes.reserve(n / 2);

  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    indexes[x] = i;
  }

  cin >> m;

  pair<ll, ll> comparisons { 0, 0 };

  for (int i = 0; i < m; ++i) {
    int query;
    cin >> query;

    if (indexes.find(query) == indexes.end()) {
      continue;
    }

    int index = indexes.at(query);

    comparisons.first += index + 1;
    comparisons.second += n - index;
  }

  cout << comparisons.first << " " << comparisons.second;

  return 0;
}