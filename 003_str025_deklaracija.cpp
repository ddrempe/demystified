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
	
	return 0;
}

//Zadatak. Pokrenite program unose�i brojeve 32766 i 1, 32766 i 2, 2.147.483.646 i 1, te 2.147.483.646 i 2. Isto ponovite i s negativnim brojevima.
