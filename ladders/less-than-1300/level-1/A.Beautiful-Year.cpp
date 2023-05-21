#include <iostream>
#include <sstream>
#include <string>
#include <set>

using namespace std;

string read_input() {
  string borze_code;

  getline(cin, borze_code);

  return borze_code;
}

bool string_contains_only_distinct_chars(string year_string) {
  set<char> chars;

  for (char digit : year_string) {
    chars.insert(digit);
  }

  return chars.size() == year_string.length();
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string year = read_input();
  int year_number = stoi(year);

  while (true) {
    string year_string = to_string(++year_number);

    if (string_contains_only_distinct_chars(year_string)) {
      cout << year_string;
      break;
    }
  }

  return 0;
}