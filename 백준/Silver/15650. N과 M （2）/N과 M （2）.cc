#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector <int> a;
    for(int i=0;i<n;i++){
        if(i<m) a.push_back(0);
        else a.push_back(1);
    }
    do{
        for(int i=0;i<n;i++) if(a[i]==0)cout<<i+1<<" ";
        cout<<"\n";
    }while(next_permutation(a.begin(),a.end()));
}