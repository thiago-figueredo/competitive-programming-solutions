#include <iostream>
#include <string>

using namespace std;

string solve(string n, string m) {
  string result(n.size(), ' ');

  for (size_t i = 0; i < m.size(); ++i) {
    if (n.at(i) == m.at(i)) {
      result[i] = '0';
      continue;
    }

    result[i] = '1';
  }

  return result;
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string n, m;

  getline(cin, n);
  getline(cin, m);

  cout << solve(n, m);

  return 0;
}
