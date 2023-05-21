#include <iostream>
#include <cmath>

using namespace std;

typedef unsigned int uint;

bool is_prime(uint n) {
  for (uint i = 2; i < n; ++i) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}

bool is_next_prime_after(uint next_prime, uint prime) {
  if (!is_prime(next_prime)) {
    return false;
  }

  for (uint n = prime + 1; n < next_prime; ++n) {
    if (is_prime(n)) {
      return false;
    }
  }

  return true;
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  uint n, m;

  cin >> n >> m;

  is_next_prime_after(m, n)
    ? cout << "YES"
    : cout << "NO";

  return 0;
}
