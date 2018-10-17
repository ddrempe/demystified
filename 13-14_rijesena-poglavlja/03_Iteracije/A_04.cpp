#include <iostream>
using namespace std;

/* 
ULAZ: Broj B tipa unsigned short
IZLAZ: Suprotna vrijednost broja B u binarnom zapisu */

int main(){
	unsigned short a;
	cout<<"Unesite pozitivni cijeli broj: "; cin>>a;
	a=~a+1;
	
	unsigned short b=1<<15;	
	for (int i=0;i<16;i++){
		if(a&b) cout<<1;
		else cout<<0;
		a<<=1;
	}
	
	return 0;
}
