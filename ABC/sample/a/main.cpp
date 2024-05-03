#include <bits/stdc++.h>

#include <atcoder/all>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int, int>;

int main() {
  int in = 0;
  int t_point_sum = 0, a_point_sum = 0;
  rep(i, 9) {
    cin >> in;
    t_point_sum += in;
  }
  rep(i, 8) {
    cin >> in;
    a_point_sum += in;
  }
  cout << (t_point_sum - a_point_sum + 1) << endl;
  return 0;
}
