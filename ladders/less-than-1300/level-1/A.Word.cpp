#include <iostream>
#include <string>
#include <cctype>

using namespace std;

size_t get_amount_of_uppercase(string s) {
  size_t amount = 0;

  for (char c : s) {
    if (isupper(c)) {
      amount++;
    }
  }

  return amount;
}

string to_lowercase(string s) {
  for (size_t i = 0; i < s.length(); ++i) {
    s[i] = tolower(s[i]);
  }

  return s;
}

string to_uppercase(string s) {
  for (size_t i = 0; i < s.length(); ++i) {
    s[i] = toupper(s[i]);
  }

  return s;
}

string solve(string word) {
  size_t uppercase_letters = get_amount_of_uppercase(word);

  return uppercase_letters > word.size() - uppercase_letters 
    ? to_uppercase(word) 
    : to_lowercase(word);
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string word;

  getline(cin, word);

  cout << solve(word);

  return 0;
}
