#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t;
queue<int> q;

int main() {

    // to make the cin & cout fast
    IOS
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x == 1){ // operation 1
            int n;
            cin>>n;
            q.push(n); // enqueue the element
        }
        else if(x == 2) {  // operation 2
            // dequeue the last element or do nothing
            // ONLY dequeue WITHOUT printing it
            if(!q.empty()) q.pop();
        }
        else { // operation 3
            if(!q.empty()) cout<<q.front()<<endl;
            else cout<<"Empty!"<<endl;
        }
    }
    return 0;
}