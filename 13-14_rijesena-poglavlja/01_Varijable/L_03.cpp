#include <iostream>
using namespace std;

/*
Izradite program u kojem:
1. se na poèetku pokretanja ispisuje proizvoljna pozdravna poruka.
2. korisnik unosi cjelobrojnu vrijednost koja se pohranjuje u odgovarajuæu varijablu.
3. se unesena vrijednost smanjuje za 1 i ispisuje na zaslon.
4. korisnik unosi drugu cjelobrojnu vrijednost koja se pohranjuje u odgovarajuæu varijablu te se na zaslon ispisuju 
obje unesene vrijednosti onim redoslijedom kojim su unesene.
5. se druga unesena vrijednost poveæa za 2 i rezultat se ispisuje na zaslon. */

int main(){
	cout<<"Dobrodosli!"<<endl;
	
	int a;
	cout<<"a: "; cin>>a;
	
	cout<<--a<<endl;
	
	int b;
	cout<<"b: "; cin>>b;
	cout<<a<<" i "<<b<<endl;
	
	b+=2;
	cout<<b<<endl;
			
	return 0;
}
