#include <iostream>
using namespace std;

/*
Izradite program u kojem:
1. se na poèetku unosi cjelobrojna vrijednost i sprema u varijablu.
2. se nakon prethodne toèke unosi druga decimalna vrijednost ali u varijablu tipa int.
3. se druga unesena vrijednost ispisuje na zaslon.
4. se unesene vrijednosti poveæaju za 1.
5. se unesene vrijednosti ispišu na zaslon obrnutim redoslijedom od redoslijeda unosa. */

int main(){
	int a;
	cout<<"a: "; cin>>a;
	
	int b;
	cout<<"b: "; cin>>b;
	
	cout<<"b= "<<b<<endl;
	
	a++; 
	b++;
	
	cout<<b<<" "<<a<<endl;
			
	return 0;
}
