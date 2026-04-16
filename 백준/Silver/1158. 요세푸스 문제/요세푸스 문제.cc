#include <iostream>
#include <string>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    queue<int> q;
    int people=0;
    for(int i=0;i<n;i++){
        q.push(i+1);
    }
    cout<<"<";
    while(!q.empty()){
        if(!(q.size()==n))
            cout<<", ";
        for(int i=1;i<k;i++){
            q.push(q.front());
            q.pop();
        }
        cout<<q.front();
        q.pop();
    }
    cout<<">";
}