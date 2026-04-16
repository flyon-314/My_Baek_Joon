#include <iostream>

using namespace std;
long long int list[1000000];

int main() {
    long long int sol=0;
    long long int K,N;
    long long int left=1,right=1,mid;
    
    cin>>K>>N;
    for(int i=0;i<K;i++){
        cin>>list[i];
        right=max(right,list[i]);
    }
    while(left<=right){
        long long temp=0;
        mid=(left+right)/2;
        for (int i = 0; i < K; i++){
            if(list[i]-mid>0){
			    temp += list[i] - mid;
            }
		}
		if(temp>=N){
		    left=mid+1;
		    sol=max(sol,mid);
		}
		else{
			right = mid - 1;
		}
    }
    cout<<sol;
    return 0;
}