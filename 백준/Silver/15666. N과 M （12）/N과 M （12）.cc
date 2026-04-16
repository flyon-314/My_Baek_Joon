#include <bits/stdc++.h>

using namespace std;
int arr[10];
int num[10];
int n,m;

void func(int k){
    if(k==m){
        for(int i=0;i<m;i++)cout<<arr[num[i]]<<" ";
        cout<<"\n";
        return;
    }
    int st=0;
    if(k!=0) st=num[k-1];
    int tmp=0;
    for(int i=st;i<n;i++){
        if(tmp==arr[i]) continue;
        tmp=arr[i];
        num[k]=i;
        func(k+1);
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    func(0);
    return 0;
}