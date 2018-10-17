#include <iostream>
using namespace std;
/*
ULAZ: slovo
IZLAZ: poruka da li je samoglasnik ili suglasnik */

int main(){
	char x;
	cout<<"Unesite slovo: "; cin>>x;
	
	switch (x){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"Samoglasnik je."<<endl;break;
		default: cout<<"Suglasnik je."<<endl;				
	}	
	return 0;
}
