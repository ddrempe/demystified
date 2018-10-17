#include <iostream>

using namespace std;

int main(){
	int a,b,c; 	
	/*
	-Kljuènom rijeèi (identifikatorom tipa) int deklarirali smo cjelobrojne a,b,c.
	-Deklaracijom smo dodijelili simbolièko ime memorijskom prostoru u koji æe se pohranjivati vrijednost tih varijabli.
	-Tip varijable takoðer odreðuje raspon dozvoljenih vrijednosti te operacija nad tom varijablom.*/
	
	cout<<"a= "; cin>>a;
	cout<<"b= "; cin>>b;
	c=a+b;
	
	cout<<"a+b= "<<c;
	
	int d=010; //inicijalizacija oktalnih konstanti
	int e=0x0C; //inicijalizacija heksadekadskih konstanti
	/* 
	-Varijable postaju realna zbiljnost tek kada im se pokuša pristupiti, npr. kada im se pridruži vrijednost.
	-Prevoditelj tek tada pridružuje memorijski prostor u koji se zapisuju podaci 
	-Inicijalizacija se može provesti i konstruktorskom sintaksom int d(010),e(0x0C) */	
	
	cout<<"\nd= "<<d<<endl<<"e= "<<e;
	
	float brzinaSvjetlosti=2.997925e8;
	float nabojElektrona=-1.6E-19;
	cout<<endl<<"Brzina svjetlosti= "<<brzinaSvjetlosti<<endl<<"Naboj elektrona= "<<nabojElektrona;
	
	//Osim što je ogranièen raspon vrijednosti koji se može prikazati float tipom ogranièen je i broj decimalnih znamenki u mantisi na 7 decimalnih mjesta.
	
	
	return 0;
}

//Zadatak. Pokrenite program unoseæi brojeve 32766 i 1, 32766 i 2, 2.147.483.646 i 1, te 2.147.483.646 i 2. Isto ponovite i s negativnim brojevima.
