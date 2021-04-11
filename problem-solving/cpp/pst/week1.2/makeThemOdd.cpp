
#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
set<int, greater<int>>st;
int n;

int main()
{
    // to make the cin & cout fast
    IOS
    int times;
    cin >> times;
    while (times --) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            int x;
            st.insert(x);
        }
        int op = 0;
        while (!st.empty()) {
            int val = *st.begin();
            if (val % 2 == 1) {
                st.erase(st.begin());
            } else {
                st.insert(val/ 2);
                st.erase(st.begin());
                op++;
            }
        }
        cout <<op<<endl;
    }
}