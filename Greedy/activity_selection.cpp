#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool sortBySec(const vector<int>& a, const vector<int>& b){
    return (a[1] < b[1]);
}

int main(){
    int n;
    cin >> n;
    vector<vector<int> > intervals;
    intervals.push_back({0, 6});
    intervals.push_back({1, 2});
    intervals.push_back({3, 4});
    intervals.push_back({5, 7});
    intervals.push_back({8, 9});
    intervals.push_back({5, 9});


    sort(intervals.begin(), intervals.end(), sortBySec);
    for(auto it : intervals){
        cout << it[0] << " " << it[1] << endl;
    }
    return 0;
}