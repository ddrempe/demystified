#include <iostream>
using namespace std;

int main(){
	int *kazalo; //pokazivaè na int
	int n=5;
	kazalo=&n; //usmjeri pokazivaè na n	
	cout<<"n= "<<n<<endl;
	cout<<"*kazalo= "<<*kazalo<<endl; // * se naziva operator dereferencijacije, a & operator adrese
	
	*kazalo+=2;
	cout<<"n= "<<n<<endl;
	cout<<"*kazalo= "<<*kazalo<<endl;	
	//kazalo+=5; preusmjerava pokazivaè, adresa æe se poveæati za 5 memorijskih blokova po 4B (za 20)
	cout<<kazalo<<" "<<kazalo+5;
	
	int m=3;
	kazalo=&m; //pokazivaè se može preusmjeriti	
	//pokazivaè se može inicijalizirati prilikom deklaracije (int *kazalo=&n;) ali samo na objekt koji veæ postoji u memoriji
	
	//Zadatak. Što æe se ispisati?
	int i=1,j=10;
	int *p=&j;
	*p *=*p;
	i=i+j;
	p=&i;
	cout<<i<<" "<<j<<" "<<*p<<endl;
	
	/*
	- Pokazivaèi tipa void pokazuju na neodreðeni tip podataka, tj. na opæenitu memorijsku lokaciju
	- Zbog toga ga možemo preusmjeriti na objekt bilo kojeg tipa 
	- Ipak, ne možemu mu izravno pridružiti vrijednost, npr.*nesvrstan=x je pogreška jer se void ne može dereferencirati */
	int a=5;
	int *poka=&a;
	float b=10.27;
	float *pokb=&b;
	void *nesvrstan;
	
	nesvrstan=&a; //preusmjeri na a
	nesvrstan=pokb; //preusmjeri na b	
	nesvrstan = &n;
	cout<<nesvrstan;
	
		
	int *x=0; // ili eksplicitnije int *x=NULL;
	/*
	- Posebna vrijednost koju pokazivaè može imati jest nul-pokazivaè, koji ne pokazuje nikuda
	- Pokazivaè na cijeli broj se ne inicijalizira tako da ga se usmjeri na neki broj, veæ se naznaèava da njegova vrijednost nije postavljena
	- Primjena? Ako se pokazivaè me inicijalizira odmah nakon deklaracije, može mu se dodijeliti vrijednost nul-pokazivaèa.
	Takoðer, funkcije koje kao rezultat vraæaju pokazivaè na objekt redovito u sluèaju pogreške vraæaju nul-pokazivaè pa se preko njega utvrðuje 
	da li je funkcija uspješno izvršena. */	
	
	int* f,*h;
	cout<<"\n"<<f<<" "<<h;
			
	return 0;
}
