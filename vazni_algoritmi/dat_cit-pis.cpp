#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace std;

/* Generirati niz znakova ascii kodova 33-126 u polje tipa char[100], zapisati ih u text datoteku, te nakon toga procitati iz datoteke i zapisati u novo polje 
velicine 100*/

int main(){
	/////GENERIRANJE POLJA PSEUDOSLUCAJNIH ZNAKOVA IZ ASCII/////
	char a[100];
	srand(time(0));
	rand();
	for(int i=0;i<100;i++) a[i]=rand() % 94 + 33;	
	
	/////UPIS IMENA DATOTEKE/////
	char imedat[30];
	cout<<"Ime datoteke: "; cin>>imedat;
	
	/////PREPISIVANJE ZNAKOVA U DATOTEKU iz polja/////
	ofstream izlazna;
	izlazna.open(imedat);	
	for(int i=0;i<100;i++) izlazna<<a[i];
	izlazna.close();
	
	/////PREPISIVANJE ZNAKOVA U POLJE iz datoteke/////
	ifstream ulazna;
	ulazna.open(imedat);
	if(!ulazna){ //nepotrebno ali nema veze
		cout<<"Trazena datoteka ne postoji."<<endl;
		return -1;
	}
	
	char b[100];
	for(int i=0;i<100;i++) ulazna>>b[i];	
	ulazna.close();
	
	for(int i=0;i<100;i++)
		if(a[i]!=b[i]) cout<<"GRESKA "<<i<<": "<<a[i]<<"!="<<b[i]<<endl;
		
	return 0;
}
