
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    vector<int> q(k);
    for (int i = 0; i < k; i++) {
        cin >> q[i];
    }

    vector<bool> used(n + 1, false);
    for (int i = 0; i < k; i++) {
        used[q[i]] = true;
    }

    int l = k; // Length of q
    for (int i = 0; i < m; i++) {
        if (l == n || (l == n - 1 && !used[a[i]])) {
            cout << 1;
        } else {
            cout << 0;
        }
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
