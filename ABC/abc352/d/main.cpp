#include <bits/stdc++.h>

#include <atcoder/all>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int, int>;

/**
 * @brief Sliding window minimum algorithm
 * @param[in] target Original array to calculate sliding minimum values
 * @param[out] window_size Sliding window size
 * @return Minimum values for each sliding window
 */
std::vector<int> CalculateSlideMinValues(const std::vector<int>& target, const int window_size) {
  std::vector<int> ans{};
  std::deque<int> deq{};

  const int array_size = static_cast<int>(target.size());
  for (int i = 0; i < array_size; ++i) {
    // Remove elements if new value is larger than last element of deque
    while (!deq.empty() && target[deq.back()] >= target[i]) {
      deq.pop_back();
    }
    deq.push_back(i);

    if (i - window_size + 1 >= 0) {
      ans.push_back(target[deq.front()]);
      // Remove elements out of slide window
      if (deq.front() == i - window_size + 1) {
        deq.pop_front();
      }
    }
  }
  return ans;
}

int main() {
  int n, k;
  cin >> n;
  cin >> k;

  vector<int> q(n);
  vector<int> q_sign_reversed(n);
  rep(i, n) {
    int p;
    cin >> p;
    --p;
    q[p] = i;
    q_sign_reversed[p] = -i;
  }

  const auto min_values = CalculateSlideMinValues(q, k);
  const auto max_values_sign_reversed = CalculateSlideMinValues(q_sign_reversed, k);

  int ans = n;
  for (size_t i = 0; i < min_values.size(); ++i) {
    ans = min(ans, -max_values_sign_reversed[i] - min_values[i]);
  }
  cout << ans << endl;
  return 0;
}
