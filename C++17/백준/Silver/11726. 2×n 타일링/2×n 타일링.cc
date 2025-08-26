#include <iostream>
using namespace std;

#define MOD 10007

int main() {
    int n;
    int a[1000];

    a[0] = 1;
    a[1] = 2;
    for (int i = 2; i < 1000; ++i) {
        a[i] = a[i - 2] + a[i - 1];
        a[i] %= MOD;
    }

    cin >> n;
    cout << a[n - 1];
    return 0;
}