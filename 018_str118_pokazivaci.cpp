#include <iostream>
using namespace std;

int main(){
	int *kazalo; //pokaziva� na int
	int n=5;
	kazalo=&n; //usmjeri pokaziva� na n	
	cout<<"n= "<<n<<endl;
	cout<<"*kazalo= "<<*kazalo<<endl; // * se naziva operator dereferencijacije, a & operator adrese
	
	*kazalo+=2;
	cout<<"n= "<<n<<endl;
	cout<<"*kazalo= "<<*kazalo<<endl;	
	//kazalo+=5; preusmjerava pokaziva�, adresa �e se pove�ati za 5 memorijskih blokova po 4B (za 20)
	cout<<kazalo<<" "<<kazalo+5;
	
	int m=3;
	kazalo=&m; //pokaziva� se mo�e preusmjeriti	
	//pokaziva� se mo�e inicijalizirati prilikom deklaracije (int *kazalo=&n;) ali samo na objekt koji ve� postoji u memoriji
	
	//Zadatak. �to �e se ispisati?
	int i=1,j=10;
	int *p=&j;
	*p *=*p;
	i=i+j;
	p=&i;
	cout<<i<<" "<<j<<" "<<*p<<endl;
	
	/*
	- Pokaziva�i tipa void pokazuju na neodre�eni tip podataka, tj. na op�enitu memorijsku lokaciju
	- Zbog toga ga mo�emo preusmjeriti na objekt bilo kojeg tipa 
	- Ipak, ne mo�emu mu izravno pridru�iti vrijednost, npr.*nesvrstan=x je pogre�ka jer se void ne mo�e dereferencirati */
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
	- Posebna vrijednost koju pokaziva� mo�e imati jest nul-pokaziva�, koji ne pokazuje nikuda
	- Pokaziva� na cijeli broj se ne inicijalizira tako da ga se usmjeri na neki broj, ve� se nazna�ava da njegova vrijednost nije postavljena
	- Primjena? Ako se pokaziva� me inicijalizira odmah nakon deklaracije, mo�e mu se dodijeliti vrijednost nul-pokaziva�a.
	Tako�er, funkcije koje kao rezultat vra�aju pokaziva� na objekt redovito u slu�aju pogre�ke vra�aju nul-pokaziva� pa se preko njega utvr�uje 
	da li je funkcija uspje�no izvr�ena. */	
	
	int* f,*h;
	cout<<"\n"<<f<<" "<<h;
			
	return 0;
}
