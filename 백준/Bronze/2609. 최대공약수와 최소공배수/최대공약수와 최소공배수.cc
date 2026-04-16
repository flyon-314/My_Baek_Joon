#include <iostream>
using namespace std;

int main() {
	int a, b ;
	cin >> a >> b;
	int sml=min(a,b);
	int big=max(a,b);
	int a_sol=0,b_sol=a*b;
	for(int i=1;i<=sml;i++){
	    if(a%i==0 && b%i==0)
	        a_sol=i;
	}
	for(int i=a;i<=a*b;i++){
	    if(i%a==0 && i%b==0)
	        b_sol=min(b_sol,i);
	}
	cout<<a_sol<<endl<<b_sol;

}