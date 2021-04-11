
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
    for (int i = 0; i < n; ++i) {
        string username;
        cin >> username;
        if (mp[username] == 0){
            cout<< "OK"<<endl;
        } else {
            cout <<username<<mp[username]<<endl;
            mp[username]++;
        }
    }
}