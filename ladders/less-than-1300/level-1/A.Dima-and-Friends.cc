#include<bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, total = 0;

  cin >> n;

  int fingers = 0;

  for (int i = 0; i < n; ++i) {
    int finger;
    cin >> finger;
    fingers += finger;
  }

  for (int i = 1; i <= 5; ++i) {
    if ((fingers + i) % (n+1) != 1) {
      total++;
    } 
  }

  cout << total << "\r\n";

  return 0;
}
