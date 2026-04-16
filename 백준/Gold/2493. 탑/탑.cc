#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int N,high;
    stack <pair<int, int> > tower;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>high;
        while(!tower.empty()){
            if(tower.top().second>high){
                cout<<tower.top().first<<" ";
                break;
            }
            tower.pop();
        }
        if(tower.empty())
            cout<<"0 ";
        tower.push(make_pair(i+1,high));
    }
        
}