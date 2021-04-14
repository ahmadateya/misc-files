#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    IOS
    int q;
    cin >> q;
    deque<int> dq;
    bool dir = 0; // direction

    while (q--) {
        string cmd;
        cin >> cmd;
        if (cmd == "toFront") {
            int n;
            cin >> n;
            if (dir == 0)
                dq.push_front(n);
            else
                dq.push_back(n);
        } else if (cmd == "push_back") {
            int n;
            cin >> n;
            if (dir == 0)
                dq.push_back(n);
            else
                dq.push_front(n);
        } else if (cmd == "front") {
            if (dq.size() == 0)
                cout << "No job for Ada?\n";
            else {
                if (dir == 0) {
                    cout << dq.front() << endl;
                    dq.pop_front();
                } else {
                    cout << dq.back() << endl;
                    dq.pop_back();
                }
            }
        } else if (cmd == "back") {
            if (dq.size() == 0)
                cout << "No job for Ada?\n";
            else {
                if (dir == 0) {
                    cout << dq.back() << endl;
                    dq.pop_back();
                }else {
                    cout << dq.front() << endl;
                    dq.pop_front();
                }
            }
        } else { // reverse case
            // reversing by changing the direction and looking on the other direction
            dir = !dir;
        }
    }
}