#include <iostream>
using namespace std;

/* ULAZ: N osoba (najviše 50). Za svaku osobu se unosi šifra, prezime i ime, spol, težina i visina.
IZLAZ: Za svaku osobu treba izraèunati omjer težine i visine (relativnu težinu), te ispisati sve osobe koje su iznad prosjeka. 
Pri tome treba odvojiti osobe prema spolu. */
 
int main(){
	struct osobe{
		int ID;
		float tezina,visina,relt;
		char prezime[50],ime[20],spol;		
	}osoba[50];	
	
	int n;
	do{
		cout<<"Koliko osoba zelite unositi? (max 50) "; cin>>n;
	}while(n<2 || n>50);
	
	float reltm=0,reltz=0;
	int nm=0,nz=0;
	for(int i=0;i<n;i++){
		cout<<i+1<<". osoba:"<<endl;
		cout<<"Sifra: "; cin>>osoba[i].ID;
		cout<<"Prezime: "; cin>>osoba[i].prezime;
		cout<<"Ime: "; cin>>osoba[i].ime;
		do{
		cout<<"Spol (M/Z): "; osoba[i].spol=cin.get();
		}while(osoba[i].spol != 'M' && osoba[i].spol != 'Z');
		cout<<"Tezina: "; cin>>osoba[i].tezina;
		cout<<"Visina: "; cin>>osoba[i].visina;
		
		osoba[i].relt=osoba[i].tezina/osoba[i].visina;
		
		if(osoba[i].spol=='M') {reltm+=osoba[i].relt; nm++;}
		else {reltz+=osoba[i].relt; nz++;}
		cout<<endl;
	}	
	float prosjekm=reltm/nm;
	float prosjekz=reltz/nz;
	
	for(int i=0;i<n;i++){
		if(osoba[i].spol=='M' && osoba[i].relt>prosjekm) cout<<osoba[i].ime<<" "<<osoba[i].prezime<<" "<<osoba[i].relt<<endl;
		if(osoba[i].spol=='Z' && osoba[i].relt>prosjekz) cout<<osoba[i].ime<<" "<<osoba[i].prezime<<" "<<osoba[i].relt<<endl;		
	}
	
	
	return 0;
}
