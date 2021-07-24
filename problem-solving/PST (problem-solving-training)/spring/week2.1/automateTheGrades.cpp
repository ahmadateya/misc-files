#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int cases,n;

int main() {
    // to make the cin & cout fast
    IOS
    cin>>cases;
    for (int t = 1; t <= cases; ++t) {// number of test cases
        float totalGrade = 0;

        float classGrades[3];
        for(int i = 0; i < 7; i++) {
            cin>>n;
            if (i <= 3) {
                totalGrade +=n;
            } else {
                classGrades[i-4] = n;
            }
        }

        sort(classGrades, classGrades + 3);

        float classAvgGrade = (classGrades[2] + classGrades[1]) / 2;

        totalGrade += classAvgGrade;

        // Outputting
        if (totalGrade >= 90) {
            cout <<"Case " << t << ": A" << endl;
        } else if (totalGrade >= 80 && totalGrade < 90) {
            cout <<"Case " << t << ": B" << endl;
        } else if (totalGrade >= 70 && totalGrade < 80) {
            cout <<"Case " << t << ": C" << endl;
        } else if (totalGrade >= 60 && totalGrade < 70) {
            cout <<"Case " << t << ": D" << endl;
        } else {
            cout <<"Case " << t << ": F" << endl;
        }
    }
    return 0;
}