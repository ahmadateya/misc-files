copy
#include <bits/stdc++.h>

using namespace std;

int arr[20];

// given n numbers (1 <= n <= 20)
// count the number of subsets that sum up to X (1 <= X <= 100000)

int main()
{
    int n, X, ans = 0; // 1 <= n <= 20, 1 <= X <= 100000
    cin >> n >> X;
    for(int i = 0 ; i < n ; i++) cin >> arr[i];
    // 2^0 + 2^1 + ... + 2^(n-1) == (2^n) - 1
    for(int i = 0 ; i < (1<<n) ; i++)
    {
        int sum = 0;
        for(int j = 0 ; j < n ; j++) // loop over every element in the array
        {
            if(((i>>j) & 1)) // check if bit j is present in the mask i
            {
                sum += arr[j]; // if the element is preset add its value to the sum
            }
        }
        if(sum == X) ans++;
        int mask = i;
        for(int j = 0 ; j < n ; j++) cout << mask % 2, mask /= 2;
        cout << " " << sum << endl;
    }
    cout << ans << endl;
    return 0;
}

//& bitwise and
//// 0 0 => 0
//// 0 1 => 0
//// 1 0 => 0
//// 1 1 => 1
//
//| bitwise or
//// 0 0 => 0
//// 0 1 => 1
//// 1 0 => 1
//// 1 1 => 1
//
//^ bitwise xor
//// 0 0 => 0
//// 0 1 => 1
//// 1 0 => 1
//// 1 1 => 0
//
// << shift left
// (x << i) == x * (2^i)
// >> shift right
// (x >> i) == x / (2^i)