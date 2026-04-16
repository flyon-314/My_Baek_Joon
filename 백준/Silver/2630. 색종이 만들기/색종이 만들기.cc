#include <bits/stdc++.h>

using namespace std;

int arr[2200][2200];
int zero,one;
void func(int x, int y,int n){
    bool flag=false;
    int temp=arr[y][x];
    int t=n/2;
    for(int i=y;i<y+n;i++){
        for(int j=x;j<x+n;j++){
            if(arr[i][j]!=temp){
                func(x,y,t);
                func(x+t,y,t);
                func(x+t,y+t,t);
                func(x,y+t,t);
                flag=true;
                break;
            }
        }
        if(flag) return;
    }
    if(temp==0) zero++;
    if(temp==1) one++;
    if(n==1) return;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cin>>arr[i][j];
    }
    func(0,0,n);
    cout<<zero<<"\n"<<one;
    return 0;
}