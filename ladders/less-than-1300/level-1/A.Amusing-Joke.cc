#include <unordered_map>
#include <iostream>
#include <string>

using namespace std;

unordered_map<char, int> map_from_string(string s) {
  unordered_map<char, int> map;

  for (char c : s) {
    if (map.find(c) == map.end()) {
      map[c] = 1;
      continue;
    }

    map[c] += 1;
  }

  return map;
}

const char* solve(string name, string host, string pile) {
  unordered_map<char, int> map = map_from_string(name + host);
  unordered_map<char, int> pile_map = map_from_string(pile);

  if (map.size() != pile_map.size()) {
    return "NO";
  }

  for (auto pair : map) {
    char character = pair.first;

    if (pile_map.find(character) == pile_map.end() || map.at(character) != pile_map.at(character)) {
      return "NO";
    }
  }

  return "YES";
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string name, host, pile;

  cin >> name >> host >> pile;
  
  cout << solve(name, host, pile);

  return 0;
}