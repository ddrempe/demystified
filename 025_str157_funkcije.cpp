#include <iostream>
using namespace std;

/* 
- Deklaracija funkcije obznanjuje naziv funkcije, broj i tip parametra te tip njezine povratne vrijednosti
	- ne sadr�i opis �to i kako funkcija radi, ona daje tek prototip funkcije
	- ima oblik <povratni_tip> ime_funkcije (<tip> argument1, <tip> argument2);
	- broj argumenata, njihov redoslijed i tip nazivaju se potpisom funkcije
	
- Deklaracija i definicija funkcije mogu biti smje�tene u potpuno razli�itim dijelovima izvornog koda
- Deklaracija se mora navesti u svakom programskom odsje�ku gdje se funkcija poziva, prije prvog poziva
- Definicija se smje�ta u samo jedan dio koda, a svi pozivi te funkcije �e se prilikom povezivanja usmjeriti na tu definiciju
- Ako se definicija i deklaracija razlikuju, prevoditelj javlja pogre�ku - tip funkcije, te broj, redoslijed i tip argumenata moraju se poklapati

- Funkcija kao rezultat mo�e vra�ati podatke bilo kojeg tipa osim polja i funkcija (iako mo�e vra�ati pokaziva�e na takve tipove) */

double kvadrat (float x){ //ova deklaracija �ini prototip funkcije, a sve zajedno tek �ini definiciju funkcije
	return x*x; /*naredbe koje se izvode prilikom poziva funkcije �ine tijelo funkcije koje po�inje prvom naredbom iza lijeve viti�aste zagrade, 
				a zavr�ava desnom zagradom */
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
	Zadatak. Napi�ite program za odre�ivanja dana u tjednu kori�tenjem dviju funkcija �ije su deklaracije:
		int nadnevakUBroj(int d, int m, int g);
		void danUTjednu(int);
	
	Prva funkcija neka pretvara zadani datum u cijeli broj (izme�u 0 i 6), a druga funkcija neka shodno tome broju ispisuje naziv dana u tjednu.
	*/
	int dan,mjesec,godina;
	cout<<"Upisi dan: "; cin>>dan;
	cout<<"Upisi mjesec: "; cin>>mjesec;
	cout<<"Upisi godinu: "; cin>>godina;
	
	int datum=nadnevakUBroj(dan,mjesec,godina);
	danUTjednu(datum);
				
	return 0;
}
