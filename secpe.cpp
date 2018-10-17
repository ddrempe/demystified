#include <iostream>
using namespace std;

/* 
- Deklaracija funkcije obznanjuje naziv funkcije, broj i tip parametra te tip njezine povratne vrijednosti
	- ne sadrži opis što i kako funkcija radi, ona daje tek prototip funkcije, kada funkcija ima i opis sto i kako radi to je sve zajedno definicija funkcije
	- ima oblik <povratni_tip> ime_funkcije (<tip> argument1, <tip> argument2);
	- broj argumenata, njihov redoslijed i tip nazivaju se potpisom funkcije
	
- Funkcija kao rezultat može vraæati podatke bilo kojeg tipa osim polja i funkcija (iako može vraæati pokazivaèe na takve tipove) */

double kvadrat (float x){  	//[2.] funkcija uzima vrijednost koju si joj proslijedil iz a i kopira si ju u ovaj x (a ostaje netaknut, osim kad ides prek pokazivaca)
	x*=x;					//[3.] s x se racuna kaj god treba
	return x;				//[4.] funkcija vraca ono kaj je izracunato u x
							//[5.] kad se funkcija izvrsi ovo sadrzaj u x postaje nebitan, bitno je samo kaj je funkcija vrnula, znaci moglo je biti samo i da vraca 0 (return 0)
};							//ovu funkciju isto tak mores samo napisati u jednom redu: return x*x;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(){
	float a;
	cout<<"Upisite broj koji zelite kvadrirati: "; cin>>a;	
	cout<<kvadrat(a)<<endl; //[1.] poziva se funkcija i prosljeðuje joj se argument iz varijable a
	cout<<"6^2= "<<kvadrat(6)<<endl; /*moze se i odmah proslijediti broj, 
	 - bit je da funkcija mora ko argument primiti podatak koji je onog tipa kak je deklarirano u funkciji (float x), znaci ovde moras dati 
	 neke da je float ili da se da prikazati ko float
	 - ovdje se samo razultat koji funkcija vraca ispisuje na ekran, ali ga mozes i pospremiti u neku drugi varijablu
	 npr. int kvadratOdDva=kvadrat(2);
	 						
	 */
				
	return 0;
}
