#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool atLeastTwo(bool a, bool b, bool c) {
    return a ? (b || c) : (b && c);
}

int main() {
    int n,a,b,c, count=0;
    cin >> n;
    while (n--) {
        cin >> a >> b >> c;
        if (atLeastTwo(a, b, c)) count++;
    }
    cout << count << endl;
    return 0;
}