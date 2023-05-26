
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string to_lowercase(string s) {
  for (size_t i = 0; i < s.size(); ++i) {
    s[i] = tolower(s[i]);
  }

  return s;
}

int main(void) {
  string s1, s2;

  cin >> s1 >> s2;

  string x1 = to_lowercase(s1);
  string x2 = to_lowercase(s2);

  if (x1 < x2) {
    cout << -1;
  } else if (x1 > x2) {
    cout << 1;
  } else {
    cout << 0;
  }


  return 0;
}