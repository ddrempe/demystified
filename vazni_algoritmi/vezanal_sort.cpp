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
	int a,n;
	
	do{
		cout<<"n: "; cin>>n;
	}while(n<2 || n>40);
		
	for(int i=1;i<=n;i++){
		do{
			cout<<"a: "; cin>>a;
		}while (a<1);
		el=new element;
		(*el).vrijednost=a;
		(*el).sljedeci=l;
		l=el;
	}
	
	element *z,*u;
	for(z=el;z;z=(*z).sljedeci){
		for(u=(*z).sljedeci;u;u=(*u).sljedeci){
			if ((*z).vrijednost>(*u).vrijednost){
				int pom=(*u).vrijednost;
				(*u).vrijednost=(*z).vrijednost;
				(*z).vrijednost=pom;
			}
		}		
	}
	
	for(l=el;l;l=(*l).sljedeci){
		cout<<(*l).vrijednost<<" ";
	}
	
	cout<<endl<<endl;
	l=el;
	while(l!=NULL){
		if( ((*l).vrijednost>='a'&&(*l).vrijednost<='z') || ((*l).vrijednost>='A'&&(*l).vrijednost<='Z') )
			cout<<"Broj "<<(*l).vrijednost<<" predstavlja slovo "<<char((*l).vrijednost)<<endl;	
		el=l;
		l=(*l).sljedeci;
		delete el;	
	}	
	return 0;
}
