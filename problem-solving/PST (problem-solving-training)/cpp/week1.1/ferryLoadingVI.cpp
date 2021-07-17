#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    // to make the cin & cout fast
    IOS
    int t;
    cin >> t;
    while (t--) {
        int len, n;
        cin >> len >> n;
        len *= 100;
        vector<int> a(n);
        vector<string> b(n);

        queue<int> l, r;

        bool side = 0;
        // 0 means left, 1 means right

        int remSize = len, res = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i] >> b[i];
            if (b[i] == "left")
                l.push(a[i]);
            else
                r.push(a[i]);
        }

        while (l.size() > 0 || r.size() > 0) {
            if (side == 0) {
                if (l.size() == 0) {
                    side ^= 1;
                    res++;
                } else {
                    while (l.size() && l.front() <= remSize) {
                        remSize -= l.front();
                        l.pop();

                    }
                    remSize = len;
                    side ^= 1;
                    res++;
                }
            } else {
                if (r.size() == 0){
                    side ^= 1;
                    res++;
                }
                else {
                    while (r.size() > 0 && r.front() <= remSize) {
                        remSize -= r.front();
                        r.pop();
                    }
                    remSize = len;
                    side ^= 1;
                    res++;
                }
            }
        }
        cout<<res<<endl;
    }
}