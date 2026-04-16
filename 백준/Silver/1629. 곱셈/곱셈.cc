#include <bits/stdc++.h>

using namespace std;

long long func(int num, int n,int m){
    if(n==1) return num%m;
    int mid=n/2;
    if(n%2==1) return func(num,mid,m)*func(num,mid+1,m)%m;
    else return func(num,mid,m)*func(num,mid,m)%m;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c;
    cin>>a>>b>>c;
    cout<<func(a,b,c);
    
    return 0;
}