#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vl = vector<ll>;

ll n;
vl A, B;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;

  A = vl(n);
  for (auto&& a : A) {
    cin >> a;
  }

  B = vl(n);
  for (auto&& b : B) {
    cin >> b;
  }

  auto ans = 0LL;
  for (auto i = 0; i < n; ++i) {
    ans += abs(A[i] - B[i]);
  }
  ans /= 2;

  cout << ans;

  return 0;
}