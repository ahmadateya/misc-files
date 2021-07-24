#include <bits/stdc++.h>

using namespace std;


// solution https://ideone.com/Kmq3ns
int t,n,h;

int main()
{
    cin>>t;
    while(t--){
        cin>>n>>h;
        string s = "";
        for(int i = 0; i < n - h; i++) s += "0";
        for(int i = 0; i < h; i++) s += "1";
        do{
            cout<<s<<endl;

        }while(next_permutation(s.begin() , s.end()));
        if(t) cout<<endl;
    }

    return 0;
}