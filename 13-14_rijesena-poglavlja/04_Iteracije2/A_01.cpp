#include <iostream>
#include <cmath>
using namespace std;

/* 
ULAZ: Prirodni broj A
IZLAZ: Rastav broja A na proste faktore */

int main () {
	int a;
	do{
		cout<<"Unesite prirodni broj: "; cin>>a;
	}while(a<2);
	
	for (int k=2; k<=sqrt(a) && a!=1; k++)
		while(a%k==0){
			cout<<k;
			a/=k;
			cout<<"*";
		}
	if(a>1) cout<<a;
	
	return 0;
}

