#include <set>
#include <string>
#include <iostream>

using namespace std;

bool is_boy(string username) {
  set<char> chars;

  for (size_t i = 0; i < username.size(); ++i) {
    chars.insert(username.at(i));
  }

  return chars.size() % 2 != 0;
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string username;

  cin >> username;

  if (is_boy(username)) {
    cout << "IGNORE HIM!";
    return 0;
  }


  cout << "CHAT WITH HER!";
  return 0;
}