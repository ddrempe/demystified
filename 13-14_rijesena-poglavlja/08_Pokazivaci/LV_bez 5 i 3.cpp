#include <iostream>
#include <cmath> //pow() sqrt()
using namespace std;

/* Izradite program u kojem:
1. se ra�unaju rezultati ra�unskih operacija (+, -, �, �, %, ^ te sqrt(x)). Argumente unosi korisnik. Isto tako potrebno je izraditi algoritam koji �e pomno�iti 
svaki element unesenog polja odre�enim skalarom. Algoritme implementirati preko pokaziva�a te ispisati sve podatke na zaslon.

2. je potrebno u jednodimenzionalno polje, dinami�ki alocirano, unijeti odre�eni niz znakova. Korisnik odre�uje veli�inu polja. Nakon unosa ispisuju se 
svi znakovi u polju na zaslon kao i broj njihova pojavljivanja te potom korisnik od svih ispisanih znakova odabire koji �eli zamijeniti nakon �ega se unosi 
novi znak s kojim �e se zamijeniti prethodno odabrani. Rezultat zamjene ispisati na ekran. Algoritam je potrebno realizirati preko pokaziva�a.

3. se ra�una korijen svakog elementa matrice nakon korisnikova unosa iste. Broj redova i stupaca unosi korisnik (max veli�ina [100][100]). Nakon �to korisnik
unese elemente stupac po stupac i izra�unaju se korijeni potrebno je obje dijagonale matrice sortirati silazno. Na kraju treba izra�unati aritmeti�ku sredinu
neparnih brojeva u obje dijagonale zajedno. Na zaslon je potrebno ispisati sve podatke uklju�uju�i i svaki uneseni stupac odmah nakon uno�enja. Algoritam je
potrebno realizirati preko pokaziva�a.

4. Korisnik unosi N prirodnih brojeva, N <= 40. Brojeve je potrebno sortirati uzlazno. Rje�enje je potrebno izvesti pomo�u vezane liste. Nakon sortiranje 
potrebno je provjeriti dali postoje brojevi koji se nalaze u rasponu ASCII kodova slova i ako da koji su to te koja slova su predstvaljena tim brojevima. 
Na zaslon ispisati sve potrebne podatke.

5. korisnik odre�uje veli�inu jednodimenzionalnog polja. U alocirano polje je mogu�e unijeti i brojeve ali i znakove. Nakon unosa potrebno je parne brojeve
sortirati uzlazno i postaviti ih na po�etak polja, neparne silazno i postaviti ih na kraj polja a znakove je potrebno sortirati abecedno (a - z) i 
smjestiti ih na sredinu polja. Isto tako izme�u svake grupe elemenata je potrebno staviti delimiter ASCII koda 45. Algoritam realizirati preko pokaziva�a. */

//4
struct element{
	int vrijednost;
	element *sljedeci;
};

typedef element *lista;

int main(){
	//1
	int *pok1=new int, *pok2=new int, a1[8],s1;
	cout<<"Unesite prvi broj: "; cin>>*pok1;
	cout<<"Unesite drugi broj: "; cin>>*pok2;	
	a1[0]=*pok1 + *pok2;
	a1[1]=*pok1 - *pok2;
	a1[2]=*pok1 / *pok2;
	a1[3]=*pok1 * *pok2;
	a1[4]=*pok1 % *pok2;
	a1[5]=pow(*pok1, *pok2);
	a1[6]=sqrt(*pok1);
	a1[7]=sqrt(*pok2);
	
	for(int i=0;i<8;i++){
		cout<<*(a1+i)<<" ";
	}
	cout<<endl<<"Unesite skalar: "; cin>>s1;	
	for(int i=0;i<8;i++){
		a1[i]*=s1;
		cout<<*(a1+i)<<" ";
	}
	cout<<endl<<endl;
	
	delete pok1,pok2;
	
	//2
	int n2;
	do{
		cout<<"n: "; cin>>n2;
	}while(n2<2 || n2>1000);	
	char *a2=new char[n2];
	for(int i=0;i<n2;i++){
		cout<<"Unesite "<<i+1<<". znak: "; cin>>*(a2+i);
	}
	
	for(int i=0;i<n2;i++){
		cout<<*(a2+i)<<" ";
	}
	cout<<endl;
	
	//sortiranje umetanjem
	for(int i=1;i<n2;i++){
		int j=i-1;
		char pom=*(a2+i);
		while(j>=0 && *(a2+j)>pom)
			*(a2+j+1)=*(a2+(j--));
		*(a2+j+1)=pom;
	}
	
	//broj pojave znakova - polje mora biti sortirano
	int c2=0;
	char v2=*a2;
	cout<<*a2;
	for(int i=0;i<n2;i++){
		if(*(a2+i) != v2){
			cout<<" "<<c2<<endl;			
			v2=*(a2+i);
			c2=1;
			cout<<*(a2+i);
		}
		else c2++;
	}
	cout<<" "<<c2<<endl<<endl;
	
	bool mjenjaj=false;
	char *b2=new char, *z2=new char;
	cout<<"Koji znak zelite zamijeniti? "; cin>>*b2;
	for(int i=0;i<n2;i++) if(*b2== *(a2+i)) mjenjaj=true; //provjera da li ima znaka u polju
	
	
	if(mjenjaj){
		cout<<"Unesite novi znak: "; cin>>*z2;
		for(int i=0;i<n2;i++){
			if(*(a2+i)== *b2) *(a2+i)=*z2;
		}
	}
	else cout<<"Trazeni znak ne postoji."<<endl;
	
	for(int i=0;i<n2;i++){
		cout<<*(a2+i)<<" ";
	}
	cout<<endl;
	delete [] a2;
	
	//4	
	lista l=NULL;
	bool end=false;
	element *el;
	int i4=0;
	do{
		int a;
		do{
			cout<<"a= "; cin>>a;
		}while(a<0);
		if(a>0){
		el=new element;
		(*el).vrijednost=a;
		(*el).sljedeci=l;
		l=el;
		}
		else end=true;
	}while(!end && (++i4)<40);	
	
	element *z; //novi
	element *u; // trenutni
	for(z=el; z; z= (*z).sljedeci){
		for(u=(*z).sljedeci; u; u=(*u).sljedeci){
			if((*u).vrijednost<(*z).vrijednost){
				int p=(*z).vrijednost;
				(*z).vrijednost=(*u).vrijednost;
				(*u).vrijednost=p;
			}
		}
	}
	
	while(l!=NULL){
		cout<<(*l).vrijednost<<" ";
		el=l;
		l=(*l).sljedeci;
	}
	
	while(l!=NULL){
		if( ((*l).vrijednost>='A'&&'Z') || ((*l).vrijednost>='a'&&'z') ) cout<<(*l).vrijednost<<" je slovo "<<char((*l).vrijednost)<<endl;
		el=l;
		l=(*l).sljedeci;
		delete el;
	}
	
		
	
	//5
	int n5;
	char *a5=new char[n5];
	do{
		cout<<"Unesite n:"; cin>>n5;
	}while(n5<2||n5>1000);
	
	for(int i=0;i<n5;i++){
		cout<<"Unesite "<<i+1<<". znak ili broj: "; cin>>*(a5+i);
	}
	
	delete [] a5;
	
	
		
}
