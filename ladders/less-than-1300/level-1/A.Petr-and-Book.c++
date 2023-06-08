#include<bits/stdc++.h>

using namespace std;

#define WEEKDAYS 7

int main(void) {
  int n, total_pages = 0;
  cin >> n;

  int pages[WEEKDAYS];

  fill(pages, pages + WEEKDAYS, -1);

  while (true) {
    for (int i = 0; i < WEEKDAYS; i = (i+1) % WEEKDAYS) {
      if (pages[i] < 0) {
        cin >> pages[i];
      }

      total_pages += pages[i];

      if (total_pages >= n) {
        cout << i+1 << "\r\n";
        exit(EXIT_SUCCESS);
      }
    }
  }

  return EXIT_FAILURE;
}