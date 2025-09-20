#include <iostream>
#include <string>
#include <map>
using namespace std;

void solve() {
  int n, m;
  string a, b;

  map<string, string> mp;
  cin >> n >> m;
  for (int i=0; i<n; i++) {
    cin >> a >> b;
    mp[a] = b;
  }

  for (int i=0; i<m; i++) {
    cin >> a;
    cout << mp[a] << "\n";
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}