#include <iostream>
#include <string>

using namespace std;

int main(void) {
  string s;

  cin >> s;

  for (char c : s) {
    if (c == 'H' || c == '9' ||  c == 'Q') {
      cout << "YES";
      exit(EXIT_SUCCESS);
    }
  }

  cout << "NO";

  return 0;
}