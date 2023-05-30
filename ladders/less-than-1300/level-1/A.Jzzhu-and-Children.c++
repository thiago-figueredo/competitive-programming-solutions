#include<bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m, count = 0;

  cin >> n >> m;

  int a[n];

  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  int j;

  for (j = 0; count != n; j = (j+1) % n) {
    if (a[j] <= 0) {
      continue;
    }

    a[j] -= m;

    if (a[j] <= 0) {
      count++;
    } 

    if (count == n) {
      cout << j + 1;
      exit(0);
    }
  }

  return 0;
}
