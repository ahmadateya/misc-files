#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int getTheLongest(string a, string b)
{
    return a.length() > b.length() ? a.length() : b.length();
}
int main() {
    IOS
    string str1, str2;
    int count = 0;
    cin >> str1 >> str2;
    int length = getTheLongest(str1, str2);
    for (int i = 0; i < length; i++) {
        if (str1 != str2) {
            str1.erase(remove(str1.begin(), str1.end(), str1[i]), str1.end());
        }
    }

    return 0;
}