#include <bits/stdc++.h>

using namespace std;
vector <pair<int,int>> v;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string inp,num;
    bool check=false;
    int sol=0;
    cin>>inp;
    for(int i=0;i<inp.length();i++){
        if(inp[i]>='0'&&inp[i]<='9') num+=inp[i];
        else {
            if(check) sol-=stoi(num);
            else sol+=stoi(num);
            num.clear();
        }
        if(inp[i]=='-')check=true;
    }
    if(check) sol-=stoi(num);
    else sol+=stoi(num);
    num.clear();
    cout<<sol;
}