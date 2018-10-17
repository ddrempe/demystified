#include <iostream>
using namespace std;

/*
Ulaz: Pozitivni cijeli broj A
Izlaz: Broj A zapisan u heksadecimalnom i oktalnom sustavu */


int main(){
	int n;	
	do{
		cout<<"Unesite pozitivni cijeli broj n: ";
		cin>>n;
	}while(n<0);
	
	cout<<"n(10)= "<<n<<endl;
	cout<<"n(8)= "<<oct<<n<<endl;
	cout<<"n(16)= "<<hex<<n<<endl;
	
	/*
	- oct, hex 	– instrukcije koje sve ispise cijelih brojeva prebacuju u oktalni, odnosno heksadecimalni zapis 
				- nakon nje æe cout naredbe koje slijede sve cijele brojeve ispisivati u zadanom zapisu sve dok se ova opcija ne iskljuèi */

	
	return 0;
}
