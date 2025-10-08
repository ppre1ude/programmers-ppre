#include <iostream>
using namespace std;

void solve() {
  long long n, p; cin >> n >> p;

  long long ans = 1;
  for (long long i=1; i<=n; i++) {
    ans = (ans * i) % p;
  }
  cout << ans;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}