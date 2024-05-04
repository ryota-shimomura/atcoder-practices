#include <bits/stdc++.h>

#include <atcoder/all>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int, int>;

int main() {
  string s, t;
  cin >> s;
  cin >> t;

  int s_index = 0;
  vector<int> ans;
  rep(i, t.length()) {
    if (s[s_index] == t[i]) {
      ans.push_back(i);
      s_index++;
    }
  }
  rep(i, ans.size()) {
    if (i > 0 && i < static_cast<int>(ans.size())) {
      cout << " ";
    }
    cout << ans[i] + 1;
  }
  cout << endl;
  return 0;
}
