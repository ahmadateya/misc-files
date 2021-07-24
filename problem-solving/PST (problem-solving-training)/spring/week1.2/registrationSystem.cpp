
#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
map<string, int> mp;

int main()
{
    // to make the cin & cout fast
    IOS
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        string s;
        cin>>s;
        if(mp.find(s) == mp.end()){
            cout<<"OK"<<endl;
            mp[s] = 1;
        } else{
            cout<<s<<mp[s]++<<endl;
        }
    }
    return 0;
}