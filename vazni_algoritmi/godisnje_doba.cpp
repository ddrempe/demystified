#include <iostream>
using namespace std;
/*
Ulaz: Pozitivni cijeli brojevi D, M
Izlaz: Godi�nje doba u koje spada datum D.M. */

int main(){
	int d,m;
	cout<<"Unesite dan: "; cin>>d;
	cout<<"Unesite mjesec: "; cin>>m;
	
	switch(m){
		case 1: //Slu�ajevi smiju biti "prazni". Na taj se na�in mo�e rije�iti situacija kada za vi�e slu�ajeva treba izvr�iti isti kod
		case 2: cout<<"Zima"<<endl; break;
		case 3: d<21?cout<<"Zima"<<endl:cout<<"Proljece"<<endl; break;
		case 4:
		case 5: cout<<"Proljece"<<endl; break;
		case 6: d<21?cout<<"Proljece"<<endl:cout<<"Ljeto"<<endl; break;
		case 7:
		case 8: cout<<"Ljeto"<<endl; break;
		case 9: d<23?cout<<"Ljeto"<<endl:cout<<"Jesen"<<endl; break;
		case 10:
		case 11: cout<<"Jesen"<<endl; break;
		case 12: d<21?cout<<"Jesen"<<endl:cout<<"Zima"<<endl; break;
		default: cout<<"Uneseni mjesec u godini ne postoji."<<endl;
	}
	return 0;	
}
