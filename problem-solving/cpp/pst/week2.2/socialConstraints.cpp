#include <bits/stdc++.h>

using namespace std;
// solution https://ideone.com/0wdd93

int n,m;
int cons[25][3];

int main()
{
    while(cin>>n>>m){

        if(!n && !m) return 0;
        for(int i = 0; i < m; i++)
            cin>>cons[i][0]>>cons[i][1]>>cons[i][2];
        vector<int> v(n);
        for(int i = 0; i < n; i++) v[i] = i;
        int ans = 0;
        do{
            bool valid = 1;
            for(int i = 0; i < m; i++){

                int pA = find(v.begin() , v.end() ,cons[i][0]) - v.begin();
                int pB = find(v.begin() , v.end() , cons[i][1]) - v.begin();
                int c = cons[i][2];

                if(c > 0 && abs(pA - pB) > c) valid = 0;
                else if(c < 0 && abs(pA - pB) < abs(c)) valid = 0;

            }
            if(valid) ans ++;

        }while(next_permutation(v.begin() , v.end()));

        cout<<ans<<endl;
    }

    return 0;
}