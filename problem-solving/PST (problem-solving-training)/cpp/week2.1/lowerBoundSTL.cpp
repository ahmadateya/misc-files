#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    int n;
    vector<int> data;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        data.push_back(x);
    }

    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        int index = lower_bound (data.begin(), data.end(), x) - data.begin();
        if (data[index] == x)
            cout << "Yes ";
        else
            cout << "No ";

        cout << index + 1 << endl;
    }
    return 0;
}