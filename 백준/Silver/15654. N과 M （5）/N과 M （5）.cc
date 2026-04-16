#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    int a[10];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    do{
        for(int i=0;i<m;i++) cout<<a[i]<<" ";
        cout<<"\n";
        reverse(a+m,a+n);
    }while(next_permutation(a,a+n));
}