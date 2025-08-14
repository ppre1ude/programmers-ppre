#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, x;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) cin >> a[i];
  sort(a.begin(), a.end());

  cin >> m;
  ostringstream out;
  for (int i = 0; i < m; ++i) {
    cin >> x;
    auto lo = lower_bound(a.begin(), a.end(), x);
    auto hi = upper_bound(a.begin(), a.end(), x);
    out << (hi - lo) << (i + 1 == m ? '\n' : ' ');
  }
  cout << out.str();
  return 0;
}
