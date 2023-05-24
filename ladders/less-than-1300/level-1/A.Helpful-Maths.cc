#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  char c;
  int digits[100] = {0};
  int i = 0;

  while ((c = cin.get()) != '\n') {
    if (c != '+') {
      digits[i++] = c - '0';
    }
  }

  sort(digits, digits + i);

  for (int j = 0; j < i; ++j) {
    cout << digits[j];

    if (j < i-1) {
      cout << "+";
    }
  }

  return 0;
}
