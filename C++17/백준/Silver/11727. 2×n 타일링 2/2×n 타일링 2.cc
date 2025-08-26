#include <iostream>
using namespace std;

#define MOD 10007

int main() {
    int n;
    int a[1001];

    a[0] = 1;
    a[1] = 1;
    for (int i = 2; i <= 1000; ++i) {
        a[i] = a[i - 1] + 2 * a[i - 2];
        a[i] %= MOD;
    }

    cin >> n;
    cout << a[n];
    return 0;
}