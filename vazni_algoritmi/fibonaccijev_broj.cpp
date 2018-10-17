#include <iostream>
using namespace std;

/* 
ULAZ: Prirodni broj N
IZLAZ: Ispisati FN koji je definiran kao F0 = F1 = 1 Fk = Fk-1 + Fk-2, za k>1*/

int main(){
	int n,f0=1,f1=1,f=1;
	cout<<"Unesite prirodni broj n: "; cin>>n;
	
	for(int i=2;i<=n;i++){
		f=f0+f1;
		f0=f1;
		f1=f;
	}
	
	cout<<"Fn= "<<f;
	
	return 0;
}
