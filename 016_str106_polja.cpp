#include <iostream>
#include <fstream>
using namespace std;

int main(){
	/*
	- Polje podataka je niz kona�nog broja istovrsnih podataka - �lanova polja.
	- Ti podaci mogu biti bilo kojeg tipa, ugra�enog (npr. float ili int) ili korisni�ki definiranog. 
	- �lanovi polja mogu se dohva�ati pomo�u cjelobrojnog indeksa i mjenjati neovisno o ostalim �lanovima polja. */
	
	float a[5];
	/*
	- Prevoditelj �e ovom deklaracijom osigurati kontinuirani prostor u memoriji za pet decimalnih brojeva tipa float
	- Ovakvom deklaracijom �lanovi polja nisu inicijalizirani, tako da imaju slu�ajne vrijednosti ovisno o tome �to se nalazilo u dijelu memorije koji je
	dodijeljen (alociran) polju. */
	
	float b[]={1,3,5,7,9};
	/*
	- �lanovi polja mogu se inicijalizirati i na ovakav na�in prilikom deklaracije.
	- Prevoditelj �e iz inicijalizacijske liste sam zaklju�iti da je polje duljine 5 i rezervirati odgovaraju�i memorijski prostor. 
	- Duljina polja se zato mo�e izostaviti prilikom inicijalizacije, ali ako se navede treba paziti da bude ve�a ili jednaka broju inicijaliziranih �lanova 
	- Broj inicijaliziranih �lanova mo�e biti manji od duljine polja, a tada �lanovi broj�anog polja kojima nedostaju inicijalizatori postaju jednaki nuli */
	
	const int nmax=100;
	float x[nmax];
	ifstream ulazniTok("brojevi.txt");
	if(!ulazniTok) {
		cerr<<"Ne mogu otvoriti datoteku"<<endl; //standardni izlazni tok za ispis pogre�aka, koji podrazumijevano ide na zaslon
		return 1;
		}
		
	int n=-1;
	while(!ulazniTok.eof()){ //prekida se na kraju datoteke, nailaskom na kraj vra�a True
		if(n>=nmax){
			cerr<<"Previ�e podataka"<<endl;
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
