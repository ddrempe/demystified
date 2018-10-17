#include <iostream>
using namespace std;

/* 
- Deklaracija funkcije obznanjuje naziv funkcije, broj i tip parametra te tip njezine povratne vrijednosti
	- ne sadrži opis što i kako funkcija radi, ona daje tek prototip funkcije
	- ima oblik <povratni_tip> ime_funkcije (<tip> argument1, <tip> argument2);
	- broj argumenata, njihov redoslijed i tip nazivaju se potpisom funkcije
	
- Deklaracija i definicija funkcije mogu biti smještene u potpuno razlièitim dijelovima izvornog koda
- Deklaracija se mora navesti u svakom programskom odsjeèku gdje se funkcija poziva, prije prvog poziva
- Definicija se smješta u samo jedan dio koda, a svi pozivi te funkcije æe se prilikom povezivanja usmjeriti na tu definiciju
- Ako se definicija i deklaracija razlikuju, prevoditelj javlja pogrešku - tip funkcije, te broj, redoslijed i tip argumenata moraju se poklapati

- Funkcija kao rezultat može vraæati podatke bilo kojeg tipa osim polja i funkcija (iako može vraæati pokazivaèe na takve tipove) */

double kvadrat (float x){ //ova deklaracija èini prototip funkcije, a sve zajedno tek èini definiciju funkcije
	return x*x; /*naredbe koje se izvode prilikom poziva funkcije èine tijelo funkcije koje poèinje prvom naredbom iza lijeve vitièaste zagrade, 
				a završava desnom zagradom */
};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int nadnevakUBroj(int d, int m, int g){
	int dat;
	if(m < 3) dat = 365 * g + d + 31 * (m-1) + (g-1) / 4-3 * ((g-1)/100+1)/4;
	else dat = 365 * g + d  +31 * (m-1) - int(0.4*m+2.3) + g / 4-3 * (g/100+1)/4;
	cout<<"Datum "<<d<<"."<<m<<"."<<g<<". pada u ";
	return dat;
};
void danUTjednu(int a){
	switch(a%7) {		
		case 0:
			cout<<"subotu."<<endl;
			break;
		case 1:
			cout<<"nedjelju."<<endl;
			break;		
		case 2:
			cout<<"ponedjeljak."<<endl;
			break;		
		case 3:
			cout<<"utorak."<<endl;
			break;		
		case 4:
			cout<<"srijedu."<<endl;
			break;		
		case 5:
			cout<<"cetvrtak."<<endl;
			break;
		default:
			cout<<"petak."<<endl;		
	}
};

int main(){
	float a;
	cout<<"Upisite broj koji zelite kvadrirati: "; cin>>a;	
	cout<<kvadrat(a)<<endl;
	
	/*
	Zadatak. Napišite program za odreðivanja dana u tjednu korištenjem dviju funkcija èije su deklaracije:
		int nadnevakUBroj(int d, int m, int g);
		void danUTjednu(int);
	
	Prva funkcija neka pretvara zadani datum u cijeli broj (izmeðu 0 i 6), a druga funkcija neka shodno tome broju ispisuje naziv dana u tjednu.
	*/
	int dan,mjesec,godina;
	cout<<"Upisi dan: "; cin>>dan;
	cout<<"Upisi mjesec: "; cin>>mjesec;
	cout<<"Upisi godinu: "; cin>>godina;
	
	int datum=nadnevakUBroj(dan,mjesec,godina);
	danUTjednu(datum);
				
	return 0;
}
