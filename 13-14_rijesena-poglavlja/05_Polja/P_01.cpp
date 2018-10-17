#include <iostream>
using namespace std;

/* ULAZ: Prirodni broj N<=100 i N decimalnih brojeva
IZLAZ: Ispisati brojeve u obrnutom redoslijedu. */

int main () {
	int n;
	do{
		cout<<"Unesite velicinu polja n(1-100): "; cin>>n;
	}while(n<1||n>100);
	
	float p[n];	
	for(int i=0;i<n;i++){
		cout<<"Unesite "<<i+1<<". element: "; cin>>p[i];
	}
	
	for(int i=n-1;i>=0;i--){
		cout<<p[i]<<" ";
	}
		
		
	return 0;
}
