#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int t,n;
int a[55];

int main() {
    // to make the cin & cout fast
    IOS
    /*
     * take an array of elements
     * sort it
     * check if there is 2 consecutive elements is bigger than 1 => then we cant
     * make the needed operation on all elements.
     * */
    cin>>t;
    while(t --){ // number of test cases
        cin>>n; // number of the elements
        for(int i = 0; i < n; i++) cin>>a[i]; // reading the elements itself

        sort(a , a + n);

        bool flag = 1;
        for(int i = 0; i < n - 1; i++){
            if(a[i + 1] - a[i] > 1){
                flag = 0;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}