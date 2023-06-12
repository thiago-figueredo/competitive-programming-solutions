#include <iostream>

using namespace std;

#define UPPER_BOUND 1000

bool is_divisible(int a, int b) {
  return a % b == 0;
}

int main(void) {
  int sum = 0;

  for (int num = 1; num < UPPER_BOUND; num++) {
    if (is_divisible(num, 3) || is_divisible(num, 5)) {
      sum += num;
    }
  }

  cout << "The sum of the multiples of 3 and 5 from 1 to " << UPPER_BOUND << " is " << sum << "\r\n";

  return 0;
}
