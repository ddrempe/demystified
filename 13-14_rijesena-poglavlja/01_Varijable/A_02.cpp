#include <iostream>
#include <iomanip> //biblioteka koja sadrži funkcije za formatiranje ispisa meðu kojima je i setprecision()
using namespace std;

/*
Ulaz: Tri decimalna broja A, B i C
Izlaz: (A+B)/C */

int main(){
	double a,b,c; //float ima toènost na 7 decimala, a double na 15
	cout<<"Unesite a: "; cin>>a;
	cout<<"Unesite b: "; cin>>b;
	cout<<"Unesite c: "; cin>>c;
	cout<<"(a+b)/c= "<<(a+b)/c<<endl; /*rezultat se ispisuje u najviše 6 znamenaka u standardnom zapisu, a ako je prikladnije ispisuje u znanstvenom zapisu
	
	npr. ako se zeli ispisati 1234.56789 ispisat ce se 1234.57 
	   a ako se zeli ispisati 12345678.9 ispisat ce se 1.23457e+007
	*/	
	cout<<1234.56789<<" "<<12345678.9<<endl;
	
	cout<<"(a+b)/c= "<<setprecision(10)<<(a+b)/c<<endl; //funkcija koja se koristi unutar cout naredbe i definira broj znamenaka kod ispisa decimalnih brojeva
	
	return 0;
}
