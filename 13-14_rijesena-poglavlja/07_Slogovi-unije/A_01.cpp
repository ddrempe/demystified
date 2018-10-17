#include <iostream>
using namespace std;

/* ULAZ: N studenata. Za svakog studenta upisuju se sljedeæi podaci:
- Broj indeksa
- Prezime
- Ime
- Godina studija
- Polje s ocjenama
IZLAZ: Poredati studente od prve do èetvrte godine, a unutar godine silazno po prosjeènoj ocjeni.
 */
 
struct studenti {
	       int br_indeksa;
	       char prezime[20], ime[20];
	       short godina;
	       short br_ocjena;
	       short ocjene[100];
	};
struct pom {
       short godina;
       float prosjek;
       int indeks;
}; 
 
int main(){
	studenti S[5000];
    pom P[5000];
    short N;
    do {
       cout << "N = ";
       cin >> N;
    } while (N<1 || N>5000);

	for (int i=0; i<N; i++) {
        cout << "Broj indeksa: ";
        cin >> S[i].br_indeksa;
        cout << "Prezime: ";
        cin.ignore();
        cin.getline(S[i].prezime,20);
        cout << "Ime: ";
        cin.getline(S[i].ime,20);
        cout << "Godina studija: ";
        cin >> S[i].godina;
        cout << "Broj ocjena: ";
        cin >> S[i].br_ocjena;
    
        
	float PO = 0;
        for (int j=0; j<S[i].br_ocjena; j++) {
            cout << "Ocjena " << j << ": ";
            cin >> S[i].ocjene[j];
            PO += (float)S[i].ocjene[j];
        }
        PO /= S[i].br_ocjena;
        int j = i-1;
}

	

	
	return 0;
}
