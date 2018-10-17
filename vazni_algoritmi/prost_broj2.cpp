#include <iostream>
#include <cmath>
using namespace std;

/* 
ULAZ: Broj N tipa unsigned short
IZLAZ: Ispisati je li N prost broj.  */

int main(){
	unsigned short a,i=2;
	bool prost=true;
	cout<<"Unesite pozitivni cijeli broj: "; cin>>a;
	
	while(i<=sqrt(a)&&prost){
		if(a%i++ == 0) prost=false;
	}
		
	if (prost) cout<<"Prost je. "<<endl;
	else cout<<"Nije prost. "<<endl;	
	
	return 0;
}
