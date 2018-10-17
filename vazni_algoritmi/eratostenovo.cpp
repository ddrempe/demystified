#include <iostream>
#include <iomanip> //zbog setw() funkcije
#include <cmath>
using namespace std;

/* ULAZ: Prirodni broj N<1000
IZLAZ: Prosti brojevi od 2 - N (tzv. Eratostenovo sito) */

int main () {
	int n;
	do{
		cout<<"Unesite prirodni n: "; cin>>n;
	}while(n<2||n>1000);
	
	bool prost[1000];
	for(int i=2;i<=n;i++) prost[i]=true;
	
	for(int k=2;k<=sqrt(n);k++){
		if(prost[k]){
			int l=2;
			while(k*l<=n) prost[k*l++]=false;
		}
	}

	for(int i=2;i<n;i++) if(prost[i]) cout<<setw(5)<<i<<" ";
		
	return 0;
}
