#include <iostream>
using namespace std;

int n,q,size;

int main() {
    cin >> n >> q;
    
    int** a = new int*[n]; //ar array that each element is a pointer.

    for (int i=0; i < n; i++) {
        cin >> size;
        int* row = new int[size]; // creating the row array
        for (int j=0; j < size; j++) {
            cin >> row[j];
        }
        *(a+i)=row; // associating the row array to the matrix big array
    }
    
    // output
    int x,y;
    for (int i = 0; i < q;i++) {
        cin >> x >> y;
        cout << a[x][y] << endl;
    }
    return 0;
}

