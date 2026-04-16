#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a,b;
    cin>>a>>b;
    queue <pair<long long,long long>> q;
    q.push({a,1});
    while(!q.empty()){
        pair<long long,long long> temp=q.front();q.pop();
        if(temp.first==b){
            cout<<temp.second;
            return 0;
        }
        if(temp.first*2<=b) q.push({temp.first*2,temp.second+1});
        if(temp.first*10+1<=b)q.push({temp.first*10+1,temp.second+1});
    }
    cout<<-1;
    
    
}