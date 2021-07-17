#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t;
stack<int> s;

int main() {

    // to make the cin & cout fast
    IOS
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x == 1) { // operation 1
            int n;
            cin>>n;
            s.push(n); // push the element
        }
        else if(x == 2) {  // operation 2
            // pop the last element or do nothing
            // ONLY pop WITHOUT printing it
            if(!s.empty()) s.pop();
        }
        else { // operation 3
            if(!s.empty()) cout<<s.top()<<endl;
            else cout<<"Empty!"<<endl;
        }
    }
    return 0;
}