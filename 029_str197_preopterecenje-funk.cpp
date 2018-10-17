#include <iostream>
#include <cmath>
using namespace std;

float kvadrat (float x){
	return x*x;
};
int kvadrat (int x){
	return x*x;
};

/* 
- Preoptereæenje funkcija je korištenje istog imena za razlièite inaèice funkcije 
- Funkcije se moraju meðusobno razlikovati po potpisu, tj. po tipu argumenata u deklaraciji funkcije
- Prevoditelj æe po tipu argumenata sam prepoznati koju inalicu mora koristiti 

- U primjeru iznad, gledano sa stanovišta prevoditelja, jedino što je zajednièko dvjema funkcijama je ime
- Preoptereæenje imena samo olakšava programeru da smisleno positovjetu funkcije koje obavljaju sliène radnje na razlièitim tipovima podataka 

- Funkcije se preoptereæuju samo prema tipovima argumenata, ne i prema tipu povratne vrijednosti */

double mocnica(double x, double y){
	if(x<=0) {
		cerr<<"Greska! Nije izracunljivo. "<<endl; 
		return 0;
	}
	cout<<"Koristena je funkcija za decimalne eksponente double mocnica(double x, double y)."<<endl;	
	return exp(y*log(x));
};

double mocnica(double x, int y){
	int brojac=y>0?y:-y;
	double rezultat=1.;
	while (brojac-- >0)
		rezultat *=x;
	cout<<"Koristena je funkcija za cjelobrojne eksponente double mocnica(double x, int y)."<<endl;	
	return y>0?rezultat: 1. / rezultat;	
};

/* 
Zadatak. Napišite funkciju usporedi () koja æe usporeðivati dva argumenta koji joj se prenose.
	- Ako je prvi argument veæi od drugoga, funkcija treba kao rezultat vratiti 1, 
	- ako su oba argumenta meðusobno jednaka, rezultat mora biti O, 
	- a ako je drugi argument veæi, rezultat mora biti -1. 
Preopteretite funkciju tako da za argumente prihvaæa brojeve tipa double, te pokazivaè na znakovni niz:
- int usporedi(const double prviBr, const double drugiBr);
- int usporedi(const char *prviNiz, const char *drugiNi~); */

int usporedi(const double prviBr, const double drugiBr){
	cout<<"Koristena je funkcija za brojeve. ";
	if(prviBr==drugiBr) return 0;
	else{
	if(prviBr>drugiBr) return 1;
	else return -1;
	}
};
int usporedi(const char *prviNiz, const char *drugiNiz){
	cout<<"Koristena je funkcija za nizove. ";
	if(prviNiz==drugiNiz) return 0;
	else{
	if(prviNiz>drugiNiz) return 1;
	else return -1;
	}
};


int main(){
	float x=0.5;
	int n=4;
	cout<<kvadrat(x)<<endl;
	cout<<kvadrat(n)<<endl;
	
	cout<<mocnica(-3,3)<<endl;
	cout<<mocnica(-3.,3)<<endl;
	cout<<mocnica(-2.,3.)<<endl;

	cout<<"usporedi(7,4): "<<usporedi(7,4)<<endl;
	cout<<"usporedi(7,7): "<<usporedi(7,7)<<endl;
	cout<<"usporedi(4,7): "<<usporedi(4,7)<<endl;
	
	char niz1[]="Ovo je prvi niz", niz2[]="Ovo je drugi niz";
	cout<<"usporedi(niz1,niz2): "<<usporedi(niz1,niz2)<<endl;
	cout<<"usporedi(niz1,niz1): "<<usporedi(niz1,niz1)<<endl;
	cout<<"usporedi(niz2,niz1): "<<usporedi(niz2,niz1)<<endl;
	
					
	return 0;
}
