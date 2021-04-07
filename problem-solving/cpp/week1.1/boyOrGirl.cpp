#include <bits/stdc++.h>

using namespace std;

int main() {

    // to make the cin & cout fast
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    string username = "";

    cin >> username;

    string distinctString = "";

    int inputLen = username.length();
    for (int $i = 0; $i < inputLen; $i++)
    {
        if (distinctString.find(username[$i]) != std::string::npos)
            continue;
        else
            distinctString += username[$i];
    }

    if (distinctString.length() % 2 == 0)
        cout << "CHAT WITH HER!\n";
    else
        cout << "IGNORE HIM!\n";
}