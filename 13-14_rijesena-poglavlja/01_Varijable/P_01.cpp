#include <iostream> 	//preprocesorska naredba include za ukljuèivanje biblioteke funkcija, iostream za rad s standardnim U/I ureðajima (tipkovnica i zaslon)
using namespace std; 	//Svi U/I tokovi u C++ su definirani u prostoru funkcijskih imena (namespace) std

/*Deklaracijski dio - Sastoji se od preprocesorskih i deklarativnih naredbi koje daju osnovne definicije biblioteka, konstanti i drugih 
elemenata bitnih za rad programa*/

int main(){			//Izvedbeni dio - Sastoji se od izvršnog dijela programa koji èine funkcije meðu kojima postoji toèno jedna istaknuta funkcija s imenom main 
	float a,b;
	char x;
	cout<<"Unesite a: "; cin>>a; 	//cin je ulazni tok podataka koji predstavlja standardnu ulaznu jedinicu (tipkovnicu)
	cout<<"Unesite b: "; 			//cout je standardni izlazni tok podataka koji definira standardnu izlaznu jedinicu (zaslon)

	cin>>b; 															//>> Operator za èitanje (unos) podataka sa ulaznog toka podataka
	cout<<"Unesite operator za zeljenu racunsku operaciju: "; cin>>x; 	//<< Operator za ispis podataka na izlazni tok podataka
	
	switch(x){
		case '+':cout<<"a+b= "<<a+b; break;
		case '-':cout<<"a-b= "<<a-b; break;
		case '*':cout<<"a*b= "<<a*b; break;
		case '/':cout<<"a/b= "<<a/b; break;
		default: cout<<"Greska! Unesite neki od podrzanih operatora (+ - * /)"; break;
	}
	
	cout<<endl; 		//endl je predefinirana konstanta iz iostream koja uspisuje znak s ASCII kodom 13 (prelazak u novi red) 
	system("pause"); 	//funkcija system je funkcija pomoæu koje se pokreæe komanda operacijskog sustava (dakle, ovo neæe raditi na Linuxu!) i dio je cstdlib 
						//pause je komanda OS-u da zaustavi rad programa sve dok se ne pritisne neka tipka
	return 0; 			//Poruka OS-u da je program korektno završio
	
} //vitièaste zagrade definiraju blok naredbi koje èine slijed ili sekvenciju, što znaèi da se izvode redom kojim su navedene
