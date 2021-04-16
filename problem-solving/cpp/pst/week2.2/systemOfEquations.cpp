#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    IOS
    int n,m, b, count=0;
    cin >> n >> m;
    for (int a = 0; a <= 1000; a++) {
        if (a > n || a > m) break;
        b = n - a * a;
        if (b < 0) break;
        if (b * b + a == m) count++;
    }
    cout << count << endl;
    return 0;
}