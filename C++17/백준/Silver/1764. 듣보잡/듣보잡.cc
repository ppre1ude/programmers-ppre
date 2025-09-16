#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;

  map<string, bool> a;
  string s;
  for (int i=0; i<n; i++) {
    cin >> s;
    a[s] = true;
  }

  vector<string> ans;
  for (int i=0; i<m; i++) {
    cin >> s;
    if (a[s]) ans.push_back(s);
  }

  sort(ans.begin(), ans.end());
  cout << ans.size() << "\n";
  for (int i=0; i<ans.size(); i++) {
    cout << ans[i] << "\n";
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}