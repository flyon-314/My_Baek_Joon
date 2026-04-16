#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int count[10001]={0,};
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++) {
        int in;
        cin >> in;
        count[in]+=1;
    }
    
     for (int i=1; i<10001;i++) {
        for (int j=0; j<count[i];j++) {
            cout << i << '\n';
        }
    }
}