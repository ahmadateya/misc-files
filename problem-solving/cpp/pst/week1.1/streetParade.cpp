#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    // to make the cin & cout fast
    IOS

    /* ###################### pseudo code ######################
     * read all the cars
     * reorder all of them (new var) // dont need to it, use the n in the first element
     * loop throw the input and check on every element if
     *      -   the element in the right order => push to a new output array
     *      -   not in the right order check if
     *              - first element => push to the stack
     *              - any element => check if the stack has the right element
     *                      - if has pop and push the output array
     *                      - if not push the element to the stack
     *              - last element => dont know
     *      -   if the stack is empty and all of them in the output
     *              - the problem can be solved, print "YES"
     *              - the problem cant be solved, print "NO"
     *
     * */


    int carsCount;
    cin >> carsCount;
    int carsInputArr[1000];
    for (int i = 1; i <= carsCount; i++) cin >> carsInputArr[i];
    stack<int> carsStack;
//    for (int i = 1; i <= carsCount; i++) {
//        int carNumber = carsInputArr[i];
//        carsStack.push(carNumber);
//        cout << (carsStack.top() == 1);
//    }
//    return  0;
    for (int i = 1; i <= carsCount; i++) {
        int carNumber = carsInputArr[i];
        if (carNumber == i) { // car in the right order
            cout << "carNumber == i" << "carNumber " << carNumber << "i " << i <<"continue";
            continue;
        } else {
//            if (!carsStack.empty()) cout << carsStack.top();
//            return 0;
            if (!carsStack.empty() && carsStack.top() == carNumber) { // stack is not empty
                carsStack.pop();
                cout << "//carsStack.pop()" << "carNumber " << carNumber << "i " << i <<"continue";
                continue;
            }
            carsStack.push(carNumber);
            cout << "carsStack.push()" << "carNumber " << carNumber << "i " << i <<"continue";
        }

        // the last element
        if (i == carsCount) {
            cout << "last count" << "carNumber " << carNumber << "i " << i <<"continue";
            if (carsStack.empty())
                cout << "YES";
                return  0;
            }// 5 1 2 4 3
            cout << "NO";
            return  0;
        }
}