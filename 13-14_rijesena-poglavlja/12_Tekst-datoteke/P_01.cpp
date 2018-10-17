#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

/* ULAZ: Datoteka s tekstom.
IZLAZ: Pojava svakog pojedinog slova u tekstu. Velika i mala slova se moraju brojati zajedno. Slova treba poredati od najèešæeg do najrijeðeg. */

struc sl{
	char slovo;
	int broj;
};

void ISort(sl [])

int main(){
	char datoteka[50], linija[20000];
	sl slova[26];
	for (int i=1;i<26;i++){
		slova[i].slovo='A'+i;
		slova[i].broj=0;		
	}
	
	cout<<"Upisite ime datoteke: "; cin.getline(datoteka,50);
	ifstream tekst(datoteka); 
	/* naredba za otvaranje ulaznog datotecnog toka podataka 
	- (datoteka) je ime datoteke na lokalnom disku a moze biti i putanja
	- tekst - ime datotecnog toka podataka */
	
	if(!tekst) cout<<"Nepostojeca datoteka. "<<endl;
	
		
}
