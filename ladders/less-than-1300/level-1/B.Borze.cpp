#include <iostream>
#include <string>

using namespace std;

string read_input() {
  string borze_code;

  getline(cin, borze_code);

  return borze_code;
}

string decode_borze_code(string code) {
  string ternary_number = "";

  for (size_t i = 0; i < code.length(); ++i) {
    if (i + 1 < code.length()  && code.at(i) == '-' && code.at(i+1) == '.') {
      ternary_number += '1';
      i += 1;
    } else if (i + 1 < code.length()  && code.at(i) == '-' && code.at(i+1) == '-') {
      ternary_number += '2';
      i += 1;
    } else if (code.at(i) == '.') {
      ternary_number += '0';
    }
  }

  return ternary_number;
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string borze_code = read_input();
  cout << decode_borze_code(borze_code);

  return 0;
}