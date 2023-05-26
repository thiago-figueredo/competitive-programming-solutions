#include <iostream>

using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, x = 0;

  cin >> n;

  for (int i = 0; i < n; ++i) {
    string s(3, ' ');
    cin >> s;

    if (s.find('+') != string::npos) {
      x++;
      continue;
    }

    if (s.find('-') != string::npos) {
      x--;
    }
  }

  cout << x;
  return 0;
}