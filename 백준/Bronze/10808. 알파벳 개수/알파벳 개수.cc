#include <bits/stdc++.h>

using namespace std;

int main() {
    int s[26]={0};
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        s[str[i]-97]++;
    }
    for(int i=0;i<26;i++) cout<<s[i]<<" ";
}