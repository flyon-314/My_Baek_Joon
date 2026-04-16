#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,x,count=0;
    int arr[1000001]={};
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr[temp]++;
    }
    cin>>x;
    for(int i=0;i< (x + 1) / 2;i++){
        if (x - i > 1000000) continue; 
        if(arr[i]>0&&arr[x-i]>0)count+=min(arr[i],arr[x-i]);
    }
    if (x % 2 == 0 && arr[x / 2] > 1) {
        count += arr[x / 2] / 2;
    }
    cout<<count;
}