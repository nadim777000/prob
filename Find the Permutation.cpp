#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<string> g(n);
    for(auto &i : g) {
        cin >> i;
    }
    vector<int> p(n);
    iota(p.begin(), p.end(), 0);
    sort(p.begin(), p.end(),
    [&](int x, int y) {
        if(g[x][y] == '1') return x < y;
        else return x > y;
    });
    for(auto i : p) cout << i + 1 << " "; cout << '\n';
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
