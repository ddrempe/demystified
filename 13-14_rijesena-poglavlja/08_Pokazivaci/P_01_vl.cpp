#include <iostream>
using namespace std;

/* ULAZ: Unijeti N prirodnih brojeva, gdje N nije unaprijed poznat niti se može ogranièiti. Prirodni se brojevi unose sve dok se ne unese broj 0.
IZLAZ: Ispisati brojeve obrnutim redoslijedom. */

struct element{	//slog koji æe, osim unešene vrijednosti sadržavati i pokazivaè na prethodno unešeni element.
	int vrijednost;
	element *sljedeci;
};
typedef element *lista; //ovom naredbom definiramo novi tip podataka lista, koji je pokazivaè na strukturu tipa element

int main(){
	lista l=NULL; //ne sadrži nikakvu memorijsku adresu, NULL je konstanta iz biblioteke cstdlib, koji predstavlja naziv za broj 0
	//pokazivac l uvijek pokazuje na pocetak liste
	bool end=false;
	element *el; //pomoæni pokazivaè tipa element
	
	do{
		int a;
		do{
			cout<<"a= "; cin>>a;
		}while(a<0);
		
		if(a>0){			
			el=new element; //ova naredba new alocira prostor za novu varijablu tipa element i vraæa njenu memorijsku adresu koju æemo pridružiti pokazivaèu el
						
			(*el).vrijednost=a; /*zapisi sadrzaj varijable a u novi element
			Iako smo alocirali prostor na koji pokazuje pokazivaè el i možemo ga koristiti na isti naèin kao i svaku drugu varijablu, on nema ime.
			Da bismo mu pristupili, moramo to uèiniti preko pokazivaèa koji na nj pokazuje. */			
			
			(*el).sljedeci=l; /* zapisi vrijednost pokazivaca l u novi element (toènije u "element sljedeæi"-> taj pokazivaè pokazuje na prethodni element), 
			- odnosno povezi novi element na pocetak liste
			Dakle, pokazivaè l moramo preusmjeriti (dodijeliti mu vrijednost) na adresu na koju pokazuje pokazivaè el.  
			No, kako ne bismo izgubili vrijednost na koju je prije pokazivao pokazivaè l, prvo moramo pokazivaè sljedeæi u sloogu na koji pokazuje 
			pokazivaè el promijeniti tako da pokazuje na adresu na koju pokazuje l. */

			l=el; //zapisi vrijednost pomoænog pokazivaèa (adresu novog elementa) u pokazivaè l
		}
		else end=true;
	}while(!end);
	
	while(l != NULL){ /* dok god ima elemenata u listi
	odnosno dok je vrijednost pokazivaèa "l" razlièita od 0 (a razlièita je za svaki element osim za prvi kojega smo upisali, 
	jer njegov pokazivaè nema na što pokazivati pošto je prvi u listi) */
	
		cout<<(*l).vrijednost<<" "; 
		el=l; /* spremi mem.adresu zadnjeg elementa ( koja se nalazi u pokazivaèu "l") u pomoæni "el" pokazivaè kako se nebi izgubila njegova adresa
		(zadnjeg elementa). Ako bi smo  izgubili adresu zadnjeg elementa, nebi smo mogli dealocirati tu memorijsku lokaciju*/
		
		l=(*l).sljedeci; /*izbacujemo element iz liste
		mem.adresu predzadnjeg elementa (iz pokazivaèa (*l).sljedeci) spremi u pokazivaè "l"  èime imamo zapravo u njemu adresu posljednjeg elementa 
		(predzadnji element postaje prvi */
		
		delete el; /* Naredba za dealociranje memorijskog prostora na koji pokazuje pokazivaè
		dealocira se prostor prvog elementa ( onog koji je izbrisan iz liste) */
	}	
}
