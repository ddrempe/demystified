#include <iostream>
using namespace std;

int main(){
	float x[5]={1,2,3,4,5};
	
	cout<<x<<" "<<*x<<" "<<&x<<endl; //identifikator polja je ustvari pokazivaè na prvi element, no sam pokazivaè nije nigdje alociran u memoriji	
	cout<<&x[2]<<" "<<x+2<<endl;
	
	float y[5];
	*y=*x; //preslikat ce se samo prvi clan polja x u polje y
	
	float a[3][4]={{1.1, 1.2, 1.3, 1.4},{2.1, 2.2, 2.3, 2.4}};
	cout<<*a[0]<<" "<<*a[1]<<endl;
	
	/* Zadatak. U jednodimenzionalno polje int visine [nmax] se èitaju podaci o visinama osoba. 
	To polje treba pretražiti, naæi zapis za najvišu osobu i pohraniti lokaciju tog zapisa u pokazivaè int *najvisi 
	te ispisati najveæu visinu preko tog pokazivaèa.*/	
	int nmax;
	cout<<"Koliko visina osoba zelite upisati? "; cin>>nmax;
	int visine[nmax][2], *najvisi,*najtezi,maxv=0,maxt=0;
	
	
	
	for(int i=0;i<nmax;i++) {
		cout<<i+1<<". "<<endl; 
		cout<<"Unesite visinu: "; cin>>visine[i][0];
		cout<<"Unesite tezinu: "; cin>>visine[i][1];
	}
	
	for(int i=0;i<nmax;i++){
		if(visine[i][0]>maxv){
			maxv=visine[i][0];
			najvisi=&visine[i][0];
		}
		if(visine[i][1]>maxt){
			maxt=visine[i][1];
			najtezi=&visine[i][1];
		}		
	}
	cout<<"Najvisa osoba je "<<(najvisi-visine[0])/2+1<<". i ima "<<*najvisi<<"cm, a tezi "<<*(najvisi+1)<<endl;
	cout<<"Najteza osoba je "<<(najtezi-visine[1])+1<<". i tezi "<<*najtezi<<"kg, a visoka je "<<*(najtezi-1)<<endl;
			
	return 0;
}
