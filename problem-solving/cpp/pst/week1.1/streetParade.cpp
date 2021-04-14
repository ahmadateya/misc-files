#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    IOS
    int n;
    cin >> n;
    while (n) { // ends when zero
        int a[n]; // array of size n (number of cars)

        stack<int> s;
        vector<int> mainStreet;

        for (int i = 0; i < n; i++) {
            cin >> a[i]; // reading the cars to the array
            if (s.size() == 0)
                s.push(a[i]); // if the stack is empty push a car
            else {
                // while there is a cars in the stack, and
                // the cars order is lower than the car that i have a[i]
                while (s.size() > 0 && s.top() < a[i]) {
                    // push_back the car (== at the end) to the main street
                    mainStreet.push_back(s.top());
                    // pop it from the stack
                    s.pop();
                }
                // if the car order in the stack is higher than the car i have a[i]
                // push it to the stack
                s.push(a[i]);
            }
        }

        // after reading all the values and processing it
        // if there is still a cars in the stack push it to the mainStreet
        while (s.size() > 0) {
            mainStreet.push_back(s.top());
            s.pop();
        }

        bool flag = 1;
        // loop through the mainStreet to know if the cars in the right order
        for (int i = 0; i < n - 1; i++) {
            if (mainStreet[i] > mainStreet[i + 1]) {
                flag = 0;
                break;
            }
        }

        if (flag == 1)cout << "yes\n";
        else cout << "no\n";
        cin >> n;
    }
}