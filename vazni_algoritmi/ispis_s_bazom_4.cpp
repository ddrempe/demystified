#include <iostream>
using namespace std;

/* 
Ulaz: Vrijednost A tipa unsigned short
Izlaz: Broj A u sustavu s bazom 4. */

int main(){
	unsigned short a;
	cout<<"Unesite pozitivni cijeli broj: "; cin>>a;
	
	unsigned short b=3<<14;
	for(int i=14;i>=0;i-=2){
		unsigned short c=(a&b)>>i;
		cout<<c;
		b>>=2;
	}
	
	return 0;
}
