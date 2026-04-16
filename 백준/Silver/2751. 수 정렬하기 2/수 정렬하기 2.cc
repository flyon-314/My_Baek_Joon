#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int num,tmp;
    vector<int> sol;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        cin>>tmp;
        sol.push_back(tmp);
    }
    sort(sol.begin(),sol.end());
    for(int i = 0; i < num; i++)
        cout << sol[i] << '\n';
}