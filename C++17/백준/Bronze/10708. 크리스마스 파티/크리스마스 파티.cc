#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    if (!(cin >> N)) return 0;
    cin >> M;

    vector<int> target(M);
    for (int i = 0; i < M; ++i) cin >> target[i];

    vector<int> score(N, 0);

    for (int i = 0; i < M; ++i) {
        int t = target[i];
        for (int j = 0; j < N; ++j) {
            int guess; cin >> guess;
            if (guess == t) score[j]++;
            else score[t - 1]++;
        }
    }

    for (int i = 0; i < N; ++i) {
        cout << score[i] << '\n';
    }
    return 0;
}
