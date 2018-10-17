#include <iostream>
using namespace std;

/*
Izradite program u kojem:
1. korisnik unosi dvije brojèane vrijednosti (brojevi mogu biti i decimalni, neka jedan operand bude tipa int a drugi float).
2. se uneseni brojevi zbroje i ispišu na zaslon.
3. se uneseni brojevi pomnože i ispišu na zaslon.
4. se prvi uneseni broj oduzme od drugog i rezultat se ispiše na zaslon.
5. se prvi uneseni broj podijeli sa drugim i rezultat se ispiše na zaslon. */

int main(){
	int a;
	float b;
	cout<<"a: "; cin>>a;	
	cout<<"b: "; cin>>b;
	
	cout<<a+b<<endl;
	
	cout<<a*b<<endl;
	
	cout<<b-a<<endl;
	
	cout<<a/b<<endl;
			
	return 0;
}
