#include <iostream>

using namespace std;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;

  cin >> n;

  int xs = 0, ys = 0, zs = 0;

  for (int i = 0; i < n; ++i)
  {
    int x, y, z;
    cin >> x >> y >> z;

    xs += x;
    ys += y;
    zs += z;
  }

  xs || ys || zs ? cout << "NO" : cout << "YES";

  return 0;
}