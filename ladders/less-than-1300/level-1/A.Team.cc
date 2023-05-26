#include <iostream>

using namespace std;

inline bool can_solve(char arr[], int target) {
  int count = 0;

  for (int k = 0; k < 3; k++) {
    if (count == target) {
      break;
    }

    if (arr[k] == '1') {
      count++;
    }
  }

  return count == target ? count : 0;
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, ans = 0;

  cin >> n;

  for (int i = 0; i < n; ++i) {
    char arr[3];

    for (int j = 0; j < 3; ++j) {
      cin >> arr[j];
    }

    if (can_solve(arr, 2)) {
      ans++;
    }
  }

  cout << ans;
  return 0;
}
