#include <bits/stdc++.h>

#include <atcoder/all>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, x, y, z;
  cin >> n;
  cin >> x;
  cin >> y;
  cin >> z;

  if (x < y) {
    if (x < z && z < y) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  } else {
    if (y < z && z < x) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}
