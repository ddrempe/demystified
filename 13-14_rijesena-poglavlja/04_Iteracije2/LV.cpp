#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/* 
Izradite program u kojem:
1. Korisnik unosi jedan cijeli broj izme�u 8 i 16. Ukoliko korisnik unese broj van zadanog raspona javlja se poruka gre�ke. Ukoliko je uneseni broj u zadanom
rasponu, koristeci while petlju, ispisuju na ekran svi brojevi od 5 pa sve do unesene vrijednosti (za 7 se ispisuje 5, 6, 7).

2. Korisnik unosi dva cijela broja (C i D) izme�u 10 i 20 ili izme�u 50 i 70. Ukoliko korisnik ne unese oba broja ispravno tra�i se ponovni unos oba broja. 
Ukoliko je korisnik unio ispravne brojeve na ekran se ispisuju rezultati sljededih operacija:
- A + B
- A % B
- A � B
- A++
- Suma rezultata svih prethodnih operacija

3. Unosi prirodni broj N i N velikih slova. Program treba ispisati koliko je suglasnika i samoglasnika upisano.

4. Korisnik unosi prirodne brojeve. Za svaki unos se treba provjeriti je li broj dobro unesen. Ra�unalo treba ispisati najvedu zajedni�ku mjeru unesenih brojeva.
Najveca zajedni�ka mjera vi�e brojeva se izra�unava tako da se najprije izra�una najveca zajedni�ka mjera prva dva unesena broja, nakon toga najveda zajedni�ka
mjera treceg unesenog broja i najvece zajedni�ke mjere prvih dvaju itd. S unosom se zavr�ava kada korisnik unese broj 0.

5. Korisnik i ra�unalo igraju igru par-nepar. Na po�etku igre igra� bira hode li biti par ili nepar. Nakon toga igra� i ra�unalo istovremeno deklariraju 
proizvoljni broj izme�u 1 i 5. Ra�unalo ne smije svoj broj temeljiti na korisnikovom unesenom broju, vec ga mora birati slu�ajno. 
Potrebno je provjeriti korektnost korisnikova unosa. Deklarirani brojevi se zbrajaju i ako je korisnik pogodio hode li broj biti paran ili neparan, 
dobiva bod, a u suprotom bod dobiva ra�unalo. Pobjednik je onaj tko prvi dobije 3 boda. Na kraju igre treba ispisati tko je dobio igru i s kojim rezultatom. */

int main () {
	//1
	short a;
	cout<<"Unesite cijeli broj u rasponu 8-16: "; cin>>a;
	if(a>8&&a<16){
		int brojac=5;
		while(brojac<=a){ 
			cout<<brojac<<" ";
			brojac++;
		}
		cout<<endl;
	}
	else cout<<"POGRESKA! Unesen broj je van trazenog raspona. "<<endl;
	
	//2
	short c,d;
	do{
		cout<<"Unesite dva cijela broja c i d u rasponu 10-20 ili 50-70"<<endl;
		cout<<"c: "; cin>>c;
		cout<<"d: "; cin>>d;
	}while((c<=10||(c>=20&&c<=50)||c>=70) || (d<=10||(d>=20&&d<=50)||d>=70)); 
	cout<<"c+d= "<<c+d<<endl;
	cout<<"c%d= "<<c%d<<endl;
	cout<<"c-d= "<<c-d<<endl;
	cout<<"c++= "<<c+1<<endl;
	cout<<"(c+d)+(c%d)+(c-d)+(c++)= "<<(c+d)+(c%d)+(c-d)+(c+1)<<endl;
	
	//3
	short n,samogl=0,sugl=0;
	char slovo;
	do{
		cout<<"Koliko slova cete unositi? "; cin>>n;
	}while(n<0||n>100);
	
	for(int i=1;i<=n;i++){
		do{
			cout<<"Unesite "<<i<<". slovo: "; cin>>slovo;			
		}while(slovo<65 || slovo>90); //kontrola upisa velikih slova
		if(slovo=='A' || slovo=='E' || slovo=='I' || slovo=='O' || slovo=='U')samogl++;
		else sugl++;
	}
	cout<<"Upisano je "<<samogl<<" samoglasnika i "<<sugl<<" suglasnika"<<endl;
	
	//4
	short e,f,pom;
	do{
		cout<<"Unesite prvi prirodan broj: "; cin>>e;
		cout<<"Unesite drugi prirodan broj: "; cin>>f;
	}while(e<=1 || f<=1);	
	
	while(e){
		if(e<f){
			pom=e;
			e=f;
			f=pom;
		}	
		while(e%f){
			pom=f;
			f=e%f;
			e=pom;
		}
		do{
		cout<<"Unesite sljedeci broj: "; cin>>e;
		}while(e<0||e==1);
	}
	cout<<"Najveca zajednicka mjera je "<<f;
	
	//5
	unsigned short ibroj,rbroj,ibod=0,rbod=0;
	char pn;
	
	do{
	cout<<"Zelite li biti par ili nepar? P/N "; cin>>pn;
	}while(pn!='P' && pn!='N');	
	
	while(rbod<3&&ibod<3){
		do{
			cout<<"Upisite broj: "; cin>>ibroj;
		}while(ibroj<1||ibroj>5);
		
		srand(time(0));
		rand();
		rbroj=rand()/(RAND_MAX/4)+1;
		
		if(pn=='P') (rbroj+ibroj)%2==0?ibod++:rbod++;
		else (rbroj+ibroj)%2==0?rbod++:ibod++;
	}
	cout<<"Rezultat"<<endl<<"RACUNALO - IGRAC "<<rbod<<":"<<ibod<<endl;	
		
	return 0;
}
