#include <iostream>
using namespace std;

/* 
ULAZ: prirodni broj N i N decimalnih brojeva a1, ..., aN. 
IZLAZ: Suma apsolutnih vrijednosti unešenih brojeva. */

int main(){
	int n;
	cout<<"Unesite n: "; cin>>n;
	
	float suma=0,broj;
	for(int i=1;i<=n;i++){
		cout<<"Unesite "<<i<<". broj: "; cin>>broj;
		broj>=0?suma+=broj:suma-=broj;
	}
	
	cout<<"Suma apsolutnih vrijednosti unesenih brojeva je: "<<suma;
	
	return 0;
}
