#include <iostream>
using namespace std;

/* ULAZ: Unijeti N prirodnih brojeva, gdje N nije unaprijed poznat niti se može ogranièiti. Prirodni se brojevi unose sve dok se ne unese broj 0.
IZLAZ: Ispisati brojeve obrnutim redoslijedom. */

struct element{
	int vrijednost;
	element *sljedeci;
};

typedef element *lista;

int main(){
	lista l=NULL;
	bool end=false;
	element *el;
	
	do{
		int a;
		do{
			cout<<"a: "; cin>>a;
		}while(a<0);
		if (a>0){
			el=new element;
			(*el).vrijednost=a;
			(*el).sljedeci=l;
			l=el;			
		}
		else end=true;
	}while(!end);
	
	while(l!=NULL) {
		cout<<(*l).vrijednost<<" ";
		el=l;
		l=(*l).sljedeci;
		delete el;
	}	
}
