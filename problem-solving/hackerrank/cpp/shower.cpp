#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
/// <<------------------------------------------------------------------------------>>
void init()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    cout.tie(0);
    // Reading From File
}
/// <<----;------------------------------------------------------------------------->>
int main()
{
    int n;
    cin >>n;

    int biggest = 0;
    for (int i = 1; i < n; i++) {
        if ((i * i) > n)
            break;
        biggest = i * i;
    }
    cout << biggest;
}