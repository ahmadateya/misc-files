#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    // to make the cin & cout fast
    IOS

    /* pseudo code
     * read all the cars
     * reorder all of them (new var) // dont need to it, use the n in the first element
     * loop throw the input and check on every element if
     *      -   the element in the right order => push to a new output array
     *      -   not in the right order check if
     *              => push to the stack
     *
     * */



    // reading
    int segmentsNumber, upperBound;
    cin >> segmentsNumber >> upperBound;

    vector<int> l, r;

    for (int i = 0; i < segmentsNumber; i++) {
        int a, b;
        cin >> a >> b;
        l.push_back(a), r.push_back(b);
    }

    // process
    vector<bool> pointsMap(101, 0);

    for (int i = 0; i < segmentsNumber; i++) {
        for (int j = l[i]; j <= r[i]; j++) {
            pointsMap[j] = 1;
        }
    }

    vector<int> leftPoints;

    for (int i = 1; i <= upperBound; i++)
        if (pointsMap[i] == 0)
            leftPoints.push_back(i);

    // output
    cout << leftPoints.size() << endl;
    for (int i = 0; i < leftPoints.size(); i++)
        cout << leftPoints[i] << " ";
}