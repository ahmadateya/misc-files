#include <bits/stdc++.h>

using namespace std;
#define endl         "\n"
#define IOS          ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    IOS
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());

        int idx = 0;
        while (k > 0 && idx < n) {
            if (a[idx] < b[idx])
                swap(a[idx], b[idx]);
            else
                break;
            k--;
            idx++;
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
            sum += a[i];
        cout << sum << endl;
    }
}