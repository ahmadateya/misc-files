#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student
{
private:
    int scores[5];
    int sum;

public:
    Student()
    { // and Student() : sum(0) {}  is equivalent constructors
        sum = 0;
    }

    int calculateTotalScore() { return sum; }
    void input()
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> scores[i];
            sum += scores[i];
        }
    }
};
int main()
{