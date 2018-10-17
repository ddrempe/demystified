#include <iostream>
#include <cmath> //sqrt() pow()
using namespace std;

/* ULAZ: Napraviti program u kojem æe se unositi 2-5 prirodnih brojeva 
IZLAZ: Treba izraèunati njihovu najveæu zajednièku mjeru
Napomena: Zabranjeno koristiti polje ili bilo koji drugi mehanizam agregacije.
 */
 
int M(unsigned int a,unsigned int b){
	if(a<b){
		int pom=a;
		a=b;
		b=pom;
	}
	
	while(a%b){
		int pom=b;
		b=a%b;
		a=pom;
	}	
	return b;
} 

int MM(int a, int b, int c=1, int d=1, int e=1){
	int r=M(a,b);
	if(c>1) r=M(r,c);
	if(d>1) r=M(r,d);
	if(e>1) r=M(r,e);
	return r;	
}

int ucitaj(){
	int a;
	do{
		cout<<"Unesite prirodan broj: "; cin>>a;
	}while(a<1);
	return a;
}

int main(){
	int N,A,B,C,D,E;
	do{
		cout<<"Koliko brojeva zelite: "; cin>>N;
	}while(N<2 || N>5);
	
	switch(N){
		case 5: E=ucitaj();
		case 4: D=ucitaj();
		case 3: C=ucitaj();
		case 2: B=ucitaj();
				A=ucitaj();
	}
	
	switch (N) {
		case 5: cout << MM(A,B,C,D,E);
                break;
        case 4: cout << MM(A,B,C,D);
                break;
        case 3: cout << MM(A,B,C);
                break;
        case 2: cout << MM(A,B);
    }
    cout << endl;
	
}
