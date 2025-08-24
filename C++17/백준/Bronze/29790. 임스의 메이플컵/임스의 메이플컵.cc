#include <iostream>
using namespace std;

void solve() {
  int n, u, l;
  cin >> n >> u >> l;

  cout << (n < 1000 ? "Bad" : (u >= 8000 || l >= 260 ? "Very Good" : "Good"));
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}