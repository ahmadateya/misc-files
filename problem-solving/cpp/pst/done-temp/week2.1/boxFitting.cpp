#include <bits/stdc++.h>

using namespace std;

int t,n,w;

// need revisit
// problem link https://vjudge.net/contest/432940#problem/M
int main()
{
    cin>>t;
    while(t--){
        multiset<int> mst;
        cin>>n>>w;
        for(int i = 0; i < n; i++){
            int x;
            cin>>x;
            mst.insert(x);
        }
        int h = 1;
        int currW = w;
        while(!mst.empty()){
            auto it = mst.upper_bound(currW);
            if(it == mst.begin()){
                h ++;
                currW = w;
            }
            else{
                currW -= *(--it);
                mst.erase(it);
            }
        }
        cout<<h<<endl;
    }

    return 0;
}
