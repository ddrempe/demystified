#include <iostream>
using namespace std;

/*
Ulaz: Cijeli brojevi A i B
Izlaz: Cjelobrojni kvocijent brojeva A i B, ostatak od dijeljenja i njihov decimalni kvocijent */

int main(){
	int a,b;
	cout<<"a: "; cin>>a;
	cout<<"b: "; cin>>b;
	
	cout<<"Cjelobrojni kvocijent: "<<a/b<<endl;
	cout<<"Ostatak od dijeljenja: "<<a%b<<endl;	
	cout<<"Decimalni kvocijent: "<<double(a)/b<<endl;
		
	return 0;
}
