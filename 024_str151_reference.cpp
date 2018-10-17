#include <iostream>
using namespace std;

int main(){
	int i=5; //varijabla i
	int &iref=i; //referenca na varijablu i
	cout<<"i= "<<i<<" "<<"iref= "<<iref<<endl;
	
	//proimjenom reference mijenja se izvorna varijabla
	iref=75;
	cout<<"i= "<<i<<" "<<"iref= "<<iref<<endl;
	
	/*
	Razlika izmeğu pokazivaèa i reference
	- pokazivaè
		- moe se preusmjeriti na neki drugi objekt
		- pri dohvaæanju neophodan je operator *
		- iziskuje odreğeni memorijski prostor u koji æe biti pohranjena adresa na koju on pokazuje
		
	- referenca
		- inicijalizira se prilikom deklaracije i pokazuje na dani objekt dok postoji
		- nije potreban nikakav operator za dohvaæanje
		- prilikom deklaracije mora biti inicijalizirana, mora postojati objekt na koji pokazuje */
	
		
			
	return 0;
}
