#include <iostream>
using namespace std;
/*
ULAZ: Cijeli broj izmeðu 1 i 7.
IZLAZ: Ispisati onaj dan u tjednu koji korespindira upisanom broju. */

int main(){
	unsigned short a;	
	cout<<"Unesite broj dana u tjednu (1-7): "; cin>>a;
	
	switch(a){
		case 1: cout<<"Ponedjeljak"<<endl; break; //break prekida rad bilo koje C++ kontrolne strukture osim if kontrolne strukture
		case 2: cout<<"Utorak"<<endl; break;
		case 3: cout<<"Srijeda"<<endl; break;
		case 4: cout<<"Cetvrtak"<<endl; break;
		case 5: cout<<"Petak"<<endl; break;
		case 6: cout<<"Subota"<<endl; break;
		case 7: cout<<"Nedjelja"<<endl; break;
		default: cout<<a<<". dan u tjednu ne postoji."<<endl; break;
	}
}
