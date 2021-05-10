#include <iostream>
#include <deque> 
using namespace std;


// solution https://www.geeksforgeeks.org/sliding-window-maximum-maximum-of-all-subarrays-of-size-k/

void printKMax(int arr[], int n, int k){
    deque<int> mydeque;
    // first Implementaion using only arrays
    int j, max; 
    for (int i = 0; i <= n - k; i++) { 
        max = arr[i]; 
        for (j = 1; j < k; j++) { 
            if (arr[i + j] > max) 
                max = arr[i + j]; 
        } 
        cout << max << " "; 
    } 
    cout << endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t--) {
		int n,k;
    	cin >> n >> k;
    	int arr[n];
    	for(int i=0;i<n;i++)
      		cin >> arr[i];
    		printKMax(arr, n, k);
  	}
  	return 0;
}

