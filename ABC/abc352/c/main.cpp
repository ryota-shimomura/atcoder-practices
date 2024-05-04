#include <bits/stdc++.h>

#include <atcoder/all>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;

  vector<ll> a_vec, b_vec;
  ll a, b;
  rep(i, n) {
    cin >> a;
    cin >> b;
    a_vec.push_back(a);
    b_vec.push_back(b);
  }

  ll shoulder_sum = 0;
  for (auto a : a_vec) {
    shoulder_sum += a;
  }

  ll max_head_position = 0;
  rep(i, n) {
    ll head_position = shoulder_sum - a_vec[i] + b_vec[i];
    if (head_position > max_head_position) {
      max_head_position = head_position;
    }
  }

  cout << max_head_position << endl;
  return 0;
}
