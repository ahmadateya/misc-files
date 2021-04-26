
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
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        int op = 0;

        for(int i = 0; i < n; i++){
            int x;
            cin>>x;
            st.insert(x);
        }
        while(!st.empty()){
            int val = *st.begin();
            if(val % 2 == 1) st.erase(st.begin());
            else{
                st.erase(st.begin());
                st.insert(val / 2);
                op ++;
            }
        }
        cout<<op<<endl;
    }
    return 0;
}