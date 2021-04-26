#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// solution https://ideone.com/D9SVQf

int main() {
    IOS
    int n, a, b, c;
    cin >> n;
    while (n--) {
        cin >> a >> b >> c;
        vector<int> ans;
        for (int x = 0; x <= 100; x++) {
            if (x > a) break;
            if (x > b) break;
            if (x * x > c) break;
            for (int y = 0; y <= 100; y++) {
                if (x + y > a) break;
                if (x * y > b) break;
                if (y * y > c) break;
                int z = a - (x + y);
                if ((x * x + y * y + z * z == c) and (x + y + z == a) and (x * y * z == b)) {
                    cout << x << " " << y << " "<< z << " " endl;
                    if (ans[0] > x) {
                        ans[0] = x;
                        ans[1] = y;
                        ans[2] = z;
                    } else {
                        if (ans[0] == x and ans[1] > y) {
                            ans[0] = x;
                            ans[1] = y;
                            ans[2] = z;
                        }
                    }
                }
            }

            if (!ans.empty()) {
                for (int i = 0; i < 3; i++) {
                    cout << ans[i] << " ";
                }
                cout << endl;
            } else {
                cout << "No solution." << endl;
            }
        }
        return 0;
    }
}