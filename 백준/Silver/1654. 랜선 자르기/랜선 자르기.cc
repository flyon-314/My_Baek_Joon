#include <iostream>

using namespace std;
unsigned int list[10000];

int main() {
    unsigned int sol=0;
    unsigned int K,N;
    unsigned int left=1,right=1,mid;
    
    cin>>K>>N;
    for(int i=0;i<K;i++){
        cin>>list[i];
        right=max(right,list[i]);
    }
    while(left<=right){
        unsigned int temp=0;
        mid=(left+right)/2;
        for (int i = 0; i < K; i++){
			temp += list[i] / mid;
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