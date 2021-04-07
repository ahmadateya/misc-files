
#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<int> getDistinct(int arr[], int n)
{
    // this vector to map the distinct numbers
    // [0 => 0, 1 => 0, 2 => 0, 3 => 0 ...etc]
    // its length 101 because the problem wants 100 number
    // [inputValue(as index of the vector) => vectorValue(as the index of the inputArr)]
    vector<int> foundMap(101,0);

    for (int i = 0; i < n; i++) {
        int val = arr[i]; // the value from the input
        // if the inputValue on the vector ex: 15 is not found (its vectorValue == false)
        // AKA not entered yet
        if (foundMap[val] == 0) 
            foundMap[val] = i + 1; // +1 because the problem starts with value 1 not 0
    }

    // filtering the vector from the not found (or not distinct) values
    vector<int> distinctIndexes;
    for (int i = 0; i <= 100; i++) {
        if (foundMap[i] != 0) 
            distinctIndexes.push_back(foundMap[i]); // remember foundMap[i] is the inputValue
    }

    return distinctIndexes;
}

int main()
{
    // to make the cin & cout fast
    IOS

    // reading
    int studentsNumber, teamNumber;
    cin >> studentsNumber >> teamNumber;

    int stundetsRatings[studentsNumber];
    for (int i = 0; i < studentsNumber; i++) cin >> stundetsRatings[i];

    // process
    vector<int> distinctIndexes = getDistinct(stundetsRatings, studentsNumber);

    // outputing
    if (distinctIndexes.size() < teamNumber)
        cout << "NO\n";
    else {
        cout << "YES\n";
        for (int i = 0; i < teamNumber; i++) {
            cout << distinctIndexes[i] << " ";
        }
    }
}