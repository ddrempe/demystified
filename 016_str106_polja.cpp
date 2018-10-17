#include <iostream>
#include <fstream>
using namespace std;

int main(){
	/*
	- Polje podataka je niz konaènog broja istovrsnih podataka - èlanova polja.
	- Ti podaci mogu biti bilo kojeg tipa, ugraðenog (npr. float ili int) ili korisnièki definiranog. 
	- Èlanovi polja mogu se dohvaæati pomoæu cjelobrojnog indeksa i mjenjati neovisno o ostalim èlanovima polja. */
	
	float a[5];
	/*
	- Prevoditelj æe ovom deklaracijom osigurati kontinuirani prostor u memoriji za pet decimalnih brojeva tipa float
	- Ovakvom deklaracijom èlanovi polja nisu inicijalizirani, tako da imaju sluèajne vrijednosti ovisno o tome što se nalazilo u dijelu memorije koji je
	dodijeljen (alociran) polju. */
	
	float b[]={1,3,5,7,9};
	/*
	- Èlanovi polja mogu se inicijalizirati i na ovakav naèin prilikom deklaracije.
	- Prevoditelj æe iz inicijalizacijske liste sam zakljuèiti da je polje duljine 5 i rezervirati odgovarajuæi memorijski prostor. 
	- Duljina polja se zato može izostaviti prilikom inicijalizacije, ali ako se navede treba paziti da bude veæa ili jednaka broju inicijaliziranih èlanova 
	- Broj inicijaliziranih èlanova može biti manji od duljine polja, a tada èlanovi brojèanog polja kojima nedostaju inicijalizatori postaju jednaki nuli */
	
	const int nmax=100;
	float x[nmax];
	ifstream ulazniTok("brojevi.txt");
	if(!ulazniTok) {
		cerr<<"Ne mogu otvoriti datoteku"<<endl; //standardni izlazni tok za ispis pogrešaka, koji podrazumijevano ide na zaslon
		return 1;
		}
		
	int n=-1;
	while(!ulazniTok.eof()){ //prekida se na kraju datoteke, nailaskom na kraj vraæa True
		if(n>=nmax){
			cerr<<"Previše podataka"<<endl;
			return 2;
			}
		ulazniTok>>x[++n];
	}
	
	if(n<0){
		cerr<<"Nema podataka!"<<endl;
		return 3;
	}
	
	bool zamjena=true;
	for (int i=n-1;i>0&&zamjena;i--){
		zamjena=false;
		for(int j=0;j<i;j++)
			if(x[j]>x[j+1]){
				int pom=x[j];
				x[j]=x[j+1];
				x[j+1]=pom;
				zamjena=true;
			}
	}
	
	cout<<"Sortirani brojevi"<<endl;
	for(int i=0;i<n;i++) cout<<x[i]<<" ";
			
	
	
	
			
	return 0;
}
