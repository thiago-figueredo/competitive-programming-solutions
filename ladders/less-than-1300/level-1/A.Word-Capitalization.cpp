#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string capitalize(string word) {
  word[0] = toupper(word.at(0));
  return word;
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string word;

  getline(cin, word);

  cout << capitalize(word);

  return 0;
}
