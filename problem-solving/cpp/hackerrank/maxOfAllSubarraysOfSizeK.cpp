#include <iostream>
#include <deque> 
using namespace std;

/*
 * solution https://www.geeksforgeeks.org/sliding-window-maximum-maximum-of-all-subarrays-of-size-k/
 * TODO:: this problem is so important and its solution have different implementations, you should study all of them
 *
 */

void printKMaxByArray(int arr[], int n, int k){
    // Method to find the maximum for each
    // and every contiguous subarray of size k.
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
void printKMaxByDeque(int arr[], int n, int k) {
    // Create a Double Ended Queue,
    // Qi that will store indexes of array elements
    // The queue will store indexes of useful elements in every
    // window and it will
    // maintain decreasing order of
    // values from front to rear in Qi, i.e.,
    // arr[Qi.front[]] to arr[Qi.rear()] are sorted in decreasing order
    std::deque<int> Qi(k);

    /* Process first k (or first window)
     elements of array */
    int i;
    for (i = 0; i < k; ++i)
    {
        // For every element, the previous smaller elements are useless so remove them from Qi
        while ((!Qi.empty()) && arr[i] >= arr[Qi.back()])
            // Remove from rear
            Qi.pop_back();

        // Add new element at rear of queue
        Qi.push_back(i);
    }

    // Process rest of the elements, i.e., from arr[k] to arr[n-1]
    for (; i < n; ++i)
    {
        // The element at the front of the queue is the largest element of
        // previous window, so print it
        cout << arr[Qi.front()] << " ";
        // Remove the elements which
        // are out of this window
        while ((!Qi.empty()) && Qi.front() <= i - k)
            // Remove from front of queue
            Qi.pop_front();

        // Remove all elements, smaller than the currently
        // being added element (remove useless elements)
        while ((!Qi.empty()) && arr[i] >= arr[Qi.back()])
            Qi.pop_back();
        // Add current element at the rear of Qi
        Qi.push_back(i);
    }
    // Print the maximum element of last window
    cout << arr[Qi.front()] << endl;
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
    	printKMaxByDeque(arr, n, k);
  	}
  	return 0;
}

