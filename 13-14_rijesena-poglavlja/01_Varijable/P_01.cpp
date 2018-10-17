#include <iostream> 	//preprocesorska naredba include za uklju�ivanje biblioteke funkcija, iostream za rad s standardnim U/I ure�ajima (tipkovnica i zaslon)
using namespace std; 	//Svi U/I tokovi u C++ su definirani u prostoru funkcijskih imena (namespace) std

/*Deklaracijski dio - Sastoji se od preprocesorskih i deklarativnih naredbi koje daju osnovne definicije biblioteka, konstanti i drugih 
elemenata bitnih za rad programa*/

int main(){			//Izvedbeni dio - Sastoji se od izvr�nog dijela programa koji �ine funkcije me�u kojima postoji to�no jedna istaknuta funkcija s imenom main 
	float a,b;
	char x;
	cout<<"Unesite a: "; cin>>a; 	//cin je ulazni tok podataka koji predstavlja standardnu ulaznu jedinicu (tipkovnicu)
	cout<<"Unesite b: "; 			//cout je standardni izlazni tok podataka koji definira standardnu izlaznu jedinicu (zaslon)

	cin>>b; 															//>> Operator za �itanje (unos) podataka sa ulaznog toka podataka
	cout<<"Unesite operator za zeljenu racunsku operaciju: "; cin>>x; 	//<< Operator za ispis podataka na izlazni tok podataka
	
	switch(x){
		case '+':cout<<"a+b= "<<a+b; break;
		case '-':cout<<"a-b= "<<a-b; break;
		case '*':cout<<"a*b= "<<a*b; break;
		case '/':cout<<"a/b= "<<a/b; break;
		default: cout<<"Greska! Unesite neki od podrzanih operatora (+ - * /)"; break;
	}
	
	cout<<endl; 		//endl je predefinirana konstanta iz iostream koja uspisuje znak s ASCII kodom 13 (prelazak u novi red) 
	system("pause"); 	//funkcija system je funkcija pomo�u koje se pokre�e komanda operacijskog sustava (dakle, ovo ne�e raditi na Linuxu!) i dio je cstdlib 
						//pause je komanda OS-u da zaustavi rad programa sve dok se ne pritisne neka tipka
	return 0; 			//Poruka OS-u da je program korektno zavr�io
	
} //viti�aste zagrade definiraju blok naredbi koje �ine slijed ili sekvenciju, �to zna�i da se izvode redom kojim su navedene
