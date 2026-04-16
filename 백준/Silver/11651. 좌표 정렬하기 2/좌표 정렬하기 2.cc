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
        sol.push_back({b,a});
    }
    sort(sol.begin(),sol.end());
    for(int i = 0; i < num; i++)
        cout << sol[i].second <<" "<<sol[i].first<< '\n';
}