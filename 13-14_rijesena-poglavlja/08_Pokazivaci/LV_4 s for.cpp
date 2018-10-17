#include <iostream>
using namespace std;

/* 
4. Korisnik unosi N prirodnih brojeva, N <= 40. Brojeve je potrebno sortirati uzlazno. Rješenje je potrebno izvesti pomoæu vezane liste. Nakon sortiranje 
potrebno je provjeriti dali postoje brojevi koji se nalaze u rasponu ASCII kodova slova i ako da koji su to te koja slova su predstvaljena tim brojevima. 
Na zaslon ispisati sve potrebne podatke. */

struct element{
	int vrijednost;
	element *sljedeci;
};
typedef element *lista;

int main(){
	lista l=NULL;
	element *el;
	int n,a;
	do{
		cout<<"n: "; cin>>n;
	}while(n<2||n>1000);
	
	for(int i=0;i<n;i++){
		cout<<"Unesite "<<i+1<<". broj: "; cin>>a;		
		el=new element;
		(*el).vrijednost=a;
		(*el).sljedeci=l;
		l=el;
	}
	
	for(l=el; l; l=(*l).sljedeci) cout<<(*l).vrijednost<<" ";
	cout<<endl;
	
	for(l=el; l; l=(*l).sljedeci) 
		if( ((*l).vrijednost>='a'&&'z') || ((*l).vrijednost>='A'&&'Z') ) 
			cout<<"Broj "<<(*l).vrijednost<<" u ASCII tablici predstavlja slovo "<<char((*l).vrijednost)<<endl;
			
	for(l=el; l; l=(*l).sljedeci) delete el;
	
}
