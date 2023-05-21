#include <iostream>

using namespace std;

typedef long long ll;

ll amount_of_lucky_numbers(ll n) {
  ll amount = 0;

  while (n) {
    int digit = n % 10;

    if (digit == 4 || digit == 7) {
      amount++;
    }

    n /= 10;
  }

  return amount;
}

bool is_lucky_number(ll n) {
  return n == 4 || n == 7;
}

bool is_nearly_lucky_number(ll n) {
  return is_lucky_number(amount_of_lucky_numbers(n));
}
 
int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll n;

  cin >> n;

  is_nearly_lucky_number(n)
    ? cout << "YES"
    : cout << "NO";

  return 0;
}
