#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;
        l--; // Convert to 0-based indexing

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Create brr: sorted(arr[l:]) appended to arr[:l]
        vector<int> brr = arr;
        sort(brr.begin() + l, brr.end());

        // Create crr: reversed(sorted(arr[:r])) prepended to arr[r:]
        vector<int> crr = arr;
        sort(crr.begin(), crr.begin() + r);
        reverse(crr.begin(), crr.begin() + r);

        // Calculate sums for the segments [l, r)
        long long sum_brr = accumulate(brr.begin() + l, brr.begin() + r, 0LL);
        long long sum_crr = accumulate(crr.begin() + l, crr.begin() + r, 0LL);

        // Output the minimum sum
        cout << min(sum_brr, sum_crr) << "\n";
    }

    return 0;
}
