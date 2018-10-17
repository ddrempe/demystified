#include <iostream>
#define PI 3.14159265359 //Uputa prevoditelju da prije nego što zapoène porevoðenje izvornog koda, svaku pojavu prvog niza (PI) zamijeni drugim nizom (3.14159...)

using namespace std;

int main(){
	int x=5,y=-7;
	cout<<+x<<" "<<+y<<endl;
	cout<<-x<<" "<<-y<<endl;
	
	//Zadatak. Što æe ispisati sljedeæe naredbe?
	int a=10;
	float b=10.;	
	cout<<a/3<<endl;
	cout<<b/3<<endl;
			
	//Zadatak. Da li æe postojati razliku u ispisu pri donjim naredbama?
	float c=a/3;
	cout<<c*b<<endl;
	c=a/3.;
	cout<<c*b<<endl;
	c=b*a;
	cout<<c/3<<endl;
	
	const double q=1.6e-19;
	cout<<PI<<" "<<q;
	
	/*
	-Definiranje konstante pomoæu oba pristupa daje isti rezultat osim kod simbolièkog lociranja pogrešaka (debugginga).
	-Ime konstante definirano pretpoocesorskom naredbom neæe postojati u simbolièkoj tablici koju prevoditelj generira.
	-Zato su konstante definirane pomoæu deklaracije konst dohvatljive i iz programa za simbolièko lociranje pogrešaka. */
	
	return 0;
}
