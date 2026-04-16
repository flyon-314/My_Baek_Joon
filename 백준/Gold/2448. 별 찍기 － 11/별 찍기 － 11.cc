#include <bits/stdc++.h>

using namespace std;
char star[4000][8000];

void func(int x,int y ,int n){
    if(n==3){
        star[y][x]='*';
        star[y+1][x-1]='*';star[y+1][x+1]='*';
        for(int i=x-2;i<=x+2;i++) star[y+2][i]='*';
        return;
    }
    int ns=n/2;
    func(x,y,ns);
    func(x-ns,y+ns,ns);
    func(x+ns,y+ns,ns);
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    func(n-1,0,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n*2-1;j++){
            if(star[i][j]=='*') cout<<"*";
            else cout<<" ";
        }
        cout<<"\n";
    }
}