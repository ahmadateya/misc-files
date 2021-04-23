#include <bits/stdc++.h>

using namespace std;

const int N = 2e5 + 5;
int n,m;
int a[N];

int main()
{
    cin>>n>>m;
    for(int i = 0; i < n; i++) cin>>a[i];
    sort(a , a + n);

    for(int i = 0; i < m; i++){
        int x;
        cin>>x;
        int idx = upper_bound(a, a + n, x) - a;
        cout<<idx<<" ";
    }
    return 0;
}