#include <iostream>
#include <string>

using namespace std;

#define BOY 'B'
#define GIRL 'G'

string swap_boys_and_girls(string queue) {
  for (size_t i = 0; i < queue.length() - 1; ++i) {
    if (queue.at(i) == BOY && queue.at(i + 1) == GIRL) {
      char boy = queue.at(i);
      char girl = queue.at(i + 1);

      queue[i + 1] = boy;
      queue[i] = girl;
      i += 1;
    }
  }

  return queue;
}

string queue_arrangement(string queue, int seconds) {
  while (seconds--) {
    queue = swap_boys_and_girls(queue);
  }

  return queue;
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, t;

  cin >> n >> t;

  string queue(n, ' ');

  for (int i = 0; i < n; ++i) {
    cin >> queue[i];
  }

  cout << queue_arrangement(queue, t);

  return 0;
}