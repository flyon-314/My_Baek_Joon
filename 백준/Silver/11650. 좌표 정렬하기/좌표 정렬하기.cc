#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a,b;
    int num;
    vector<pair <int,int>> sol;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        cin>>a>>b;
        sol.push_back({a,b});
    }
    sort(sol.begin(),sol.end());
    for(int i = 0; i < num; i++)
        cout << sol[i].first <<" "<<sol[i].second<< '\n';
}