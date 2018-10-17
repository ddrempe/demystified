#include <iostream>
using namespace std;

/* ULAZ: Unijeti N prirodnih brojeva, gdje N nije unaprijed poznat niti se mo�e ograni�iti. Prirodni se brojevi unose sve dok se ne unese broj 0.
IZLAZ: Ispisati brojeve obrnutim redoslijedom. */

struct element{	//slog koji �e, osim une�ene vrijednosti sadr�avati i pokaziva� na prethodno une�eni element.
	int vrijednost;
	element *sljedeci;
};
typedef element *lista; //ovom naredbom definiramo novi tip podataka lista, koji je pokaziva� na strukturu tipa element

int main(){
	lista l=NULL; //ne sadr�i nikakvu memorijsku adresu, NULL je konstanta iz biblioteke cstdlib, koji predstavlja naziv za broj 0
	//pokazivac l uvijek pokazuje na pocetak liste
	bool end=false;
	element *el; //pomo�ni pokaziva� tipa element
	
	do{
		int a;
		do{
			cout<<"a= "; cin>>a;
		}while(a<0);
		
		if(a>0){			
			el=new element; //ova naredba new alocira prostor za novu varijablu tipa element i vra�a njenu memorijsku adresu koju �emo pridru�iti pokaziva�u el
						
			(*el).vrijednost=a; /*zapisi sadrzaj varijable a u novi element
			Iako smo alocirali prostor na koji pokazuje pokaziva� el i mo�emo ga koristiti na isti na�in kao i svaku drugu varijablu, on nema ime.
			Da bismo mu pristupili, moramo to u�initi preko pokaziva�a koji na nj pokazuje. */			
			
			(*el).sljedeci=l; /* zapisi vrijednost pokazivaca l u novi element (to�nije u "element sljede�i"-> taj pokaziva� pokazuje na prethodni element), 
			- odnosno povezi novi element na pocetak liste
			Dakle, pokaziva� l moramo preusmjeriti (dodijeliti mu vrijednost) na adresu na koju pokazuje pokaziva� el.  
			No, kako ne bismo izgubili vrijednost na koju je prije pokazivao pokaziva� l, prvo moramo pokaziva� sljede�i u sloogu na koji pokazuje 
			pokaziva� el promijeniti tako da pokazuje na adresu na koju pokazuje l. */

			l=el; //zapisi vrijednost pomo�nog pokaziva�a (adresu novog elementa) u pokaziva� l
		}
		else end=true;
	}while(!end);
	
	while(l != NULL){ /* dok god ima elemenata u listi
	odnosno dok je vrijednost pokaziva�a "l" razli�ita od 0 (a razli�ita je za svaki element osim za prvi kojega smo upisali, 
	jer njegov pokaziva� nema na �to pokazivati po�to je prvi u listi) */
	
		cout<<(*l).vrijednost<<" "; 
		el=l; /* spremi mem.adresu zadnjeg elementa ( koja se nalazi u pokaziva�u "l") u pomo�ni "el" pokaziva� kako se nebi izgubila njegova adresa
		(zadnjeg elementa). Ako bi smo  izgubili adresu zadnjeg elementa, nebi smo mogli dealocirati tu memorijsku lokaciju*/
		
		l=(*l).sljedeci; /*izbacujemo element iz liste
		mem.adresu predzadnjeg elementa (iz pokaziva�a (*l).sljedeci) spremi u pokaziva� "l"  �ime imamo zapravo u njemu adresu posljednjeg elementa 
		(predzadnji element postaje prvi */
		
		delete el; /* Naredba za dealociranje memorijskog prostora na koji pokazuje pokaziva�
		dealocira se prostor prvog elementa ( onog koji je izbrisan iz liste) */
	}	
}
