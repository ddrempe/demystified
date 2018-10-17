#include <iostream>
#include <cmath>
using namespace std;
/* 
ULAZ: Pozitivni cijeli broj N
IZLAZ: Ispisati true ako je N prost broj, odnosno false ako nije. */

int main(){
	int n;
	bool prost=true;	
	cout<<"Unesite pozitivni cijeli broj: "; cin>>n;
	
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) prost=false;
		
	if(prost) cout<<n<<" je prost."<<endl;
	else cout<<n<<" nije prost."<<endl;
	
	return 0;
}
