#include <iostream>
#include <iomanip>
using namespace std;

/*
Ulaz: Dva cijela broja
Izlaz: brojevi u oktalnoj i heksadecimalnoj notaciji, njihov cjelobrojni kvocijent i ostatak od dijeljenja te decimalni kvocijent s toènošæu od 10 znamenaka */

int main(){
	int a,b;
	cout<<"a: "; cin>>a;
	cout<<"b: "; cin>>b;
	
	cout<<oct<<"a(8): "<<a<<" "<<"b(8)= "<<b<<endl;
	cout<<hex<<"a(16): "<<a<<" "<<"b(16)= "<<b<<endl;
	cout<<dec; //vracanje ispisa u dekadskom sustavu
	cout<<"Cjelobrojni kvocijent: "<<a/b<<endl;
	cout<<"Ostatak od dijeljenja: "<<a%b<<endl;	
	cout<<setprecision(10)<<"Decimalni kvocijent: "<<double(a)/b<<endl;
		
	return 0;
}
