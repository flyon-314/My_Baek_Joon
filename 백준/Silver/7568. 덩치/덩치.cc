#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> people(n);
    for(int i = 0; i < n; i++){
        cin >> people[i].first >> people[i].second;
    }
    
    for(int i = 0; i < n; i++){
        int rank = 1;
        for(int j = 0; j < n; j++){
            if(i == j) continue;
            if(people[j].first > people[i].first && people[j].second > people[i].second){
                rank++;
            }
        }
        cout << rank << " ";
    }
    return 0;
}
