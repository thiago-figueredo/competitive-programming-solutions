#include <iostream>
#include <vector>

using namespace std;

void print_perfect_permutation(int n) {
  if (n % 2) {
    cout << -1;
    return;
  }

  for (int i = 0; i < n; i += 2) {
    cout << i + 2 << " ";
    cout << i + 1 << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;

  cin >> n;

  print_perfect_permutation(n);

  return 0;
}
