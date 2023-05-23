
#include <iostream>

using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int left, right, n, number_of_zeros_in_left = 0, number_of_zeros_in_right = 0;

  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> left >> right;

    if (left == 0) {
      number_of_zeros_in_left++;
    }

    if (right == 0) {
      number_of_zeros_in_right++;
    }
  }

  int min_seconds_in_left = min(number_of_zeros_in_left, n - number_of_zeros_in_left);
  int min_seconds_in_right = min(number_of_zeros_in_right, n - number_of_zeros_in_right);

  cout << min_seconds_in_left + min_seconds_in_right;

  return 0;
}
