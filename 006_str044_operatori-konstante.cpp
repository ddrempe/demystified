#include <iostream>
#define PI 3.14159265359 //Uputa prevoditelju da prije nego �to zapo�ne porevo�enje izvornog koda, svaku pojavu prvog niza (PI) zamijeni drugim nizom (3.14159...)

using namespace std;

int main(){
	int x=5,y=-7;
	cout<<+x<<" "<<+y<<endl;
	cout<<-x<<" "<<-y<<endl;
	
	//Zadatak. �to �e ispisati sljede�e naredbe?
	int a=10;
	float b=10.;	
	cout<<a/3<<endl;
	cout<<b/3<<endl;
			
	//Zadatak. Da li �e postojati razliku u ispisu pri donjim naredbama?
	float c=a/3;
	cout<<c*b<<endl;
	c=a/3.;
	cout<<c*b<<endl;
	c=b*a;
	cout<<c/3<<endl;
	
	const double q=1.6e-19;
	cout<<PI<<" "<<q;
	
	/*
	-Definiranje konstante pomo�u oba pristupa daje isti rezultat osim kod simboli�kog lociranja pogre�aka (debugginga).
	-Ime konstante definirano pretpoocesorskom naredbom ne�e postojati u simboli�koj tablici koju prevoditelj generira.
	-Zato su konstante definirane pomo�u deklaracije konst dohvatljive i iz programa za simboli�ko lociranje pogre�aka. */
	
	return 0;
}
