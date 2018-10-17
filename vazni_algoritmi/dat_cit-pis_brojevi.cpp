#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace std;

/* U polje generirati pseudoslucajne brojeve 5-100. 
U tekstualnu datoteku prepisati cjelobrojne brojeve iz polja. 
Nakon toga procitati ih iz datoteteke te zapisati u novo polje.*/

int main(){
	/////GENERIRANJE POLJA PSEUDOSLUCAJNIH ZNAKOVA 5-100/////
	int a[100];
	srand(time(0));
	rand();
	for(int i=0;i<100;i++) a[i]=rand() % 96 + 5;	
	
	/////UPIS IMENA DATOTEKE/////
	char imedat[30];
	cout<<"Ime datoteke: "; cin>>imedat;
	
	/////PREPISIVANJE BROJEVA U DATOTEKU iz polja/////
	ofstream izlazna;
	izlazna.open(imedat);	
	for(int i=0;i<100;i++) izlazna<<a[i]<<endl;
	izlazna.close();
		
	/////PREPISIVANJE BROJEVA U POLJE iz datoteke/////
	ifstream ulazna;
	ulazna.open(imedat);
	if(!ulazna){ //nepotrebno ali nema veze
		cout<<"Trazena datoteka ne postoji."<<endl;
		return -1;
	}
	
	int b[100];
	for(int i=0;!ulazna.eof();i++) ulazna>>b[i];
	ulazna.close();
	
	/////PROVJERA DAL SU POLJA ISTA/////
	for(int i=0;i<100;i++)
		if(a[i]!=b[i]) cout<<"GRESKA "<<i<<": "<<a[i]<<"!="<<b[i]<<endl;

	return 0;
}
