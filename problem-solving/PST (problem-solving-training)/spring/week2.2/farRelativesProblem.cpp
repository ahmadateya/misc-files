#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// solution https://ideone.com/N1l6Cl
int n;

int main() {
    IOS
    int n,a,b,c, count0;
    int s[n], p[n];
    cin >> n;
    while (n--) {
        cin >> a >> b >> c;
        if (atLeastTwo(a, b, c)) count++;
    }
    cout << count << endl;
    return 0;
}