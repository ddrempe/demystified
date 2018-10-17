#include <iostream>
#include <cmath>
using namespace std;

/* 
ULAZ: Niz pozitivnih cijelih brojeva koji se prekida unosom 1
IZLAZ: Broj unešenih prostih brojeva */

int main () {
	unsigned short a,brojac=0;
	
	do{
		cout<<"Upisite broj: "; cin>>a;
		bool prost=true;
		for(int i=2;i<=sqrt(a) && prost;i++) if(a%i==0) prost=false;
		if(prost) brojac++;
	}while(a!=1);
	
	cout<<"Prostih brojeva je bilo "<<--brojac<<endl;
	
	
	
	return 0;
}

