#include <iostream>

using namespace std;

int main(){
	int a,b,c; 	
	/*
	-Klju�nom rije�i (identifikatorom tipa) int deklarirali smo cjelobrojne a,b,c.
	-Deklaracijom smo dodijelili simboli�ko ime memorijskom prostoru u koji �e se pohranjivati vrijednost tih varijabli.
	-Tip varijable tako�er odre�uje raspon dozvoljenih vrijednosti te operacija nad tom varijablom.*/
	
	cout<<"a= "; cin>>a;
	cout<<"b= "; cin>>b;
	c=a+b;
	
	cout<<"a+b= "<<c;
	
	int d=010; //inicijalizacija oktalnih konstanti
	int e=0x0C; //inicijalizacija heksadekadskih konstanti
	/* 
	-Varijable postaju realna zbiljnost tek kada im se poku�a pristupiti, npr. kada im se pridru�i vrijednost.
	-Prevoditelj tek tada pridru�uje memorijski prostor u koji se zapisuju podaci 
	-Inicijalizacija se mo�e provesti i konstruktorskom sintaksom int d(010),e(0x0C) */	
	
	cout<<"\nd= "<<d<<endl<<"e= "<<e;
	
	float brzinaSvjetlosti=2.997925e8;
	float nabojElektrona=-1.6E-19;
	cout<<endl<<"Brzina svjetlosti= "<<brzinaSvjetlosti<<endl<<"Naboj elektrona= "<<nabojElektrona;
	
	//Osim �to je ograni�en raspon vrijednosti koji se mo�e prikazati float tipom ograni�en je i broj decimalnih znamenki u mantisi na 7 decimalnih mjesta.
	
	
	return 0;
}

//Zadatak. Pokrenite program unose�i brojeve 32766 i 1, 32766 i 2, 2.147.483.646 i 1, te 2.147.483.646 i 2. Isto ponovite i s negativnim brojevima.
