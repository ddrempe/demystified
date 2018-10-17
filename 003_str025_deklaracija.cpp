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
	
	return 0;
}

//Zadatak. Pokrenite program unoseæi brojeve 32766 i 1, 32766 i 2, 2.147.483.646 i 1, te 2.147.483.646 i 2. Isto ponovite i s negativnim brojevima.
