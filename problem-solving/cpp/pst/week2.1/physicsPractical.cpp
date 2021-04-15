#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;
int n;
int a[N];

int main()
{
    freopen("input.txt","r", stdin);
    freopen("output.txt","w",stdout);

    cin>>n;
    for(int i = 0; i < n; i++) cin>>a[i];

    sort(a , a + n);

    int cnt = 0;
    int mn = n;

    // 1- we walked through the array and assumed that its the minimum element
    for(int i = 0; i < n; i++) {
        // 2- we get the first element bigger than the current element *2 (a[i] * 2)
        int idx = upper_bound(a , a + n, a[i] * 2) - a;
        // 3- we calculate the elements that is before the current element (i)
        // and the elements that is after the current element (n - idx)
        cnt = i + n - idx; // cnt = number of elements that will be deleted (number of operations)
        // 4- we store the minimum value between the number of operations we did every time
        mn = min(mn , cnt);
    }
    cout<<mn;

    return 0;
}