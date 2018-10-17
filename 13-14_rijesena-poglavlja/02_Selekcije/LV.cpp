#include <iostream>
using namespace std;
/*
Napi�ite programski kod koji radi sljede�e.
1. Tra�i od korisnika unos broja od 1 do 7 te ispisuje korisniku odgovaraju�i dan u tjednu (koristiti selekciju tipa switch).
2. Ukoliko korisnik unese broj van zadanog raspona (1-7), potrebno je ispisati da taj dan u tjednu ne postoji (napraviti modifikaciju to�ke 1).
3. Tra�i od korisnika unos brojeva 1-5 i ispisuje korisniku uneseni broj slovima (koristiti selekciju tipa if...else if...else).
4. Tra�i unos cijelog broja izme�u 1 i 10 te nakon toga ispisuje na ekran uneseni broj i slijedno sve brojeve do broja 10 (koristiti selekciju tipa switch). 
Primjerice za 5 program ispisuje 5, 6, 7, 8, 9, 10. Ukoliko korisnik unese broj van zadanog raspona ispisuje se poruka da taj broj nije podr�an.
5. Tra�i od korisnika unos jednog decimalnog broja. Ispituje da li je broj izme�u 10 i 20 i ukoliko je, ispisuje korisniku da je broj unutar navedenog raspona. 
Ukoliko uneseni broj nije u navedenom rasponu program ispisuje korisniku poruku o tome, zajedno sa cijelim dijelom unesenog broja u decimalnom, 
heksadecimalnom i oktalnom obliku. */

int main(){
	//1
	unsigned short a;
	cout<<"Unesite cijeli broj u rasponu 1-7: "; cin>>a;	
	switch (a){
		case 1: cout<<"Ponedjeljak"<<endl; break;
		case 2: cout<<"Utorak"<<endl; break;
		case 3: cout<<"Srijeda"<<endl; break;
		case 4: cout<<"Cetvrtak"<<endl; break;
		case 5: cout<<"Petak"<<endl; break;
		case 6: cout<<"Subota"<<endl; break;
		case 7: cout<<"Nedjelja"<<endl; break;
		//2
		default: cout<<a<<". dan u tjednu ne postoji."<<endl;				
	}	
	
	//3
	unsigned short b;
	cout<<"Unesite cijeli broj u rasponu 1-5: "; cin>>b;
	if(b==1) cout<<"Jedan"<<endl;
	else if(b==2) cout<<"Dva"<<endl;
	else if(b==3) cout<<"Tri"<<endl;
	else if(b==4) cout<<"Cetiri"<<endl;
	else if(b==5) cout<<"Pet"<<endl;
	else cout<<"Broj van trazenog raspona."<<endl;	
	
	//4
	unsigned short c;
	cout<<"Unesite cijeli broj u rasponu 1-10: "; cin>>c;
	switch (c){
		case 1: cout<<1<<", ";
		case 2: cout<<2<<", ";
		case 3: cout<<3<<", ";
		case 4: cout<<4<<", ";
		case 5: cout<<5<<", ";
		case 6: cout<<6<<", ";
		case 7: cout<<7<<", ";
		case 8: cout<<8<<", ";
		case 9: cout<<9<<", ";
		case 10: cout<<10<<"."<<endl; break;
		default: cout<<"Broj van trazenog raspona."<<endl;				
	}
	
	//5
	float d;
	cout<<"Unesite broj u rasponu 10-20: "; cin>>d;
	if(d>=10&&d<=20) cout<<"Broj je u trazenom rasponu."<<endl;
	else cout<<"Broj nije u trazenom rasponu."<<endl
	<<"Cijeli dio broja"<<endl
	<<"u decimalnom: "<<int(d)<<endl
	<<"u heksadecimalnom: "<<hex<<int(d)<<endl
	<<"u oktalnom: "<<oct<<int(d)<<endl;
	
	return 0;
}
