#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    // to make the cin & cout fast
    IOS
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++)
        cin>>v[i].first>>v[i].second;
    sort(v.begin() , v.end());

    int paths = 0;
    double totalDist = 0;
    do{
        paths ++;
        double dist = 0;
        for(int i = 0; i < n - 1; ++i){
            int j = i + 1;
//            dist += sqrt( (pow((v[j].first - v[i].first), 2.0) + pow((v[j].second - v[i].second), 2.0)));
            dist += sqrt(((v[j].first - v[i].first) * (v[j].first - v[i].first)) + ((v[j].second - v[i].second) * (v[j].second - v[i].second)));
        }
        totalDist += dist;
    } while (next_permutation(v.begin(), v.end()));
    // Your output will be judges as correct when
    // the absolute difference from the judge's output is at most 10e-6
    cout<<fixed<<setprecision(10);
    cout<<totalDist / paths;
    return 0;
}