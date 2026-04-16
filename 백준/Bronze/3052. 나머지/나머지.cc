#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    int cage[43]={0,};
    int count=0;
    for(int i=0;i<10;i++){
        cin>>n;
        cage[n%42]++;
        if(cage[n%42]==1)
            count++;
    }
    cout<<count;
    
}