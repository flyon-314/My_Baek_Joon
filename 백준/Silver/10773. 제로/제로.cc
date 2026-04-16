#include <bits/stdc++.h>

using namespace std;

int main() {
    int K;
    stack <int> zero;
    int c,sum=0;
    cin>>K;
    while(K--){
        cin>>c;
        if(c==0&&!zero.empty()){
            zero.pop();
        }
            
        else{
            zero.push(c);
        }
            
    }
    int n=zero.size();
    for(int i=0;i<n;i++) {
        sum+=zero.top();
        zero.pop();
    }
    cout<<sum;
}