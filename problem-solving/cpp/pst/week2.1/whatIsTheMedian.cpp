#include <bits/stdc++.h>

using namespace std;

#define sz(v)         ((int)((v).size()))
#define endl         "\n"
#define IOS          ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    IOS
    int n;
    vector<int> v;
    while (cin >> n) {
        v.push_back(n);
        sort(v.begin(), v.end());
        int sz = v.size();
        if (sz % 2 == 0) {
            // this v[sz / 2]  returns int because of the line 5
            cout << (v[sz / 2] + v[sz / 2 - 1]) / 2 << endl;
        } else
            cout << v[sz / 2] << endl;
    }
}