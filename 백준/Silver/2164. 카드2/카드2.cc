#include <bits/stdc++.h>
using namespace std;

int n,num,temp;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int count=1;
    cin>>n;
    queue <int> q;
    for(int i=1;i<=n;i++) q.push(i);
    while(q.size()!=1){
        if(count%2==1) q.pop();
        else {
            temp=q.front();
            q.pop();
            q.push(temp);
        }
        count++;
    }
    cout<<q.front();
}