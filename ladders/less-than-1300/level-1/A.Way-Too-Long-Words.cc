#include <iostream>
#include <string>

using namespace std;

void inline abbreviate(string word) {
  size_t word_size = word.size();

  if (word_size <= 10) {
    cout << word << "\r\n";
    return;
  }

  cout << word.at(0) << word_size - 2 << word.at(word_size - 1) << "\r\n";
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;

  cin >> n;
  
  while (n--) {
    string word;
    cin >> word;
    abbreviate(word);
  }


  return 0;
}