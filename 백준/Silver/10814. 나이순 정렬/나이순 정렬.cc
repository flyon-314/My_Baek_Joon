#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
bool comp(pair<int, string>a, pair<int, string>b)
{
	return a.first < b.first;
}
int main() {
    int a;
    string b;
    int num;
    vector<pair <int,string>> sol;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        cin>>a>>b;
        sol.push_back({a,b});
    }
    stable_sort(sol.begin(),sol.end(),comp);
    for(int i = 0; i < num; i++)
        cout << sol[i].first <<" "<<sol[i].second<< '\n';
}