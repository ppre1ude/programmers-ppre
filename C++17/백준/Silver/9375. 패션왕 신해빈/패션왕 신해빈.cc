#include <iostream>
#include <map>
#include <string>
using namespace std;

void solve() {
  int n;
  cin >> n;

  map<string, int> mp;
  while (n--) {
    string a, b; cin >> a >> b;
    if (mp.find(b) == mp.end()) mp[b] = 1;
    else mp[b]++;
  }

  int ans = 1;
  for (auto it=mp.begin(); it!=mp.end(); it++) {
    ans *= (it->second + 1);
  }
  cout << ans - 1 << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--)
      solve();
  return 0;
}