#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector <pair<int,string>> str;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string tmp;
        cin>>tmp;
        str.push_back({tmp.length(),tmp});
    }
    sort(str.begin(),str.end());
    for(int i=0;i<n;i++) {
        if(i>0&&str[i].second==str[i-1].second)continue;
        cout<<str[i].second<<"\n";
    }
    
}