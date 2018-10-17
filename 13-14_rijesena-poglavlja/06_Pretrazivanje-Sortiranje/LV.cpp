#include <iostream>
#include <cstring>
using namespace std;

/* Izradite program u kojem:

1. Se unosi 5 decimalnih brojeva u polje. Polje treba ispisati u originalnom obliku, zatim ga sortirati uzlazno koristeæi sortiranje izborom i ispisati u 
sortiranom obliku na ekran. Polje treba takoðer ispisati i obrnutim redoslijednom (od zadnjem elementa do prvog).

2. Korisnik unosi 10 brojeva u polje (mogu biti cijeli i decimalni). Potrebno je ispisati najmanji i najveæi element polja (koristeæi mjehurièasto sortiranje, 
ne koristiti pretraživanje) te prosjeènu vrijednost svih elemenata polja. Potrebno je zatim zamjeniti mjesta u polju tako da prvih 5 elemenata bude zadnjih 5 
a zadnjih 5 da bude prvih 5. Nakon toga je potrebno polje ispisati na ekran.

3. Korisnik unosi 10 razlièitih slova u polje. Ukoliko korisnik unese 2 puta isto slovo potrebno je unos poništiti i zatražiti ponovni unos slova. 
Nakon unosa svih slova, potrebno je ispisati slovo èiji ASCII kod je sedmi po velièini u odnosu na ASCII kodove svih slova u polju. 
Korisnik potom unosi jedno slovo a program mu ispisuje da li traženo slovo postoji i ako postoji na kojoj je poziciji u polju te koji mu je ASCII kod.

4. Korisnik unosi 10 slova (može biti i više istih). Potrebno je sortirati polje koristeæi sortiranje umetanjem u silaznom obliku i ispisati polje na ekran. 
Zatim je potrebno ispisati broj pojavljivanja svakog pojedinog razlièitog slova u polju. Potrebno je zatim ispisati pozicije svakog suglasnika u polju.

5. Korisnik unosi 5 rijeèi u polje. Potrebno je rijeèi sortirati uzlazno te ispisati na ekran. Zatim je rijeèi potrebno sortirati silazno i ispisati na ekran. 
Korisnik zatim unosi jedno slovo a program mu ispisuje koliko se puta pojedino slovo javlja na svakoj od pozicija u polju tj. u svakoj pojedinoj rijeèi. 
Zatim je potrebno ispisati na ekran rijeè u polju koja sadrži najviše i rijeè koja sadrži najmanje samoglasnika. */
 
int main(){	
	//1
	/*
	float a1[5];
	for(int i=0;i<5;i++) {
		cout<<"Unesite "<<i+1<<". broj: "; cin>>a1[i];	
	}
	for(int i=0;i<5;i++) cout<<a1[i]<<" ";
	cout<<endl;	
		
	for(int i=5; i>1; i--){
		int max=0;
		for(int j=1;j<i;j++){
			if(a1[j]>a1[max]) max=j;
		float pom=a1[i-1];
		a1[i-1]=a1[max];
		a1[max]=pom;			
		}
	}
	
	for(int i=0;i<5;i++) cout<<a1[i]<<" ";
	cout<<endl;	
	for(int i=4;i>=0;i--) cout<<a1[i]<<" ";
	cout<<endl<<endl;	
	
	//2
	float a2[10],sum=0;
	for(int i=0;i<10;i++) {
		cout<<"Unesite "<<i+1<<". broj: "; cin>>a2[i];
		sum+=a2[i];	
	}
	
	bool zamjena=true;
	for(int i=9; i>0 && zamjena; i--){
		zamjena=false;
		for(int j=0;j<i;j++)
		if (a2[j]>a2[j+1]){
			float pom=a2[j];
			a2[j]=a2[j+1];
			a2[j+1]=pom;
			zamjena=true;
		}
	}	
	cout<<"Najveci: "<<a2[9]<<", "<<"Najmanji: "<<a2[0]<<", "<<"Prosjek: "<<sum/10<<endl;
	
	for(int i=0;i<5;i++){
		float pom=a2[i];
		a2[i]=a2[i+5];
		a2[i+5]=pom;
	}
	for(int i=0;i<10;i++) cout<<a2[i]<<" ";
	cout<<endl<<endl;	
	
	//3
	char a3[10],b3;
	for(int i=0;i<10;i++) {
		cout<<"Unesite "<<i+1<<". slovo: "; cin>>a3[i];
		for(int j=0;j<i;j++) 
			if(a3[j]==a3[i]){
				cout<<"Pogresan unos! "<<endl;
				i--;
			}
	}
	
	for(int i=0;i<10;i++) cout<<char(a3[i]+7)<<" ";
	cout<<endl;
	
	cout<<"Pretrazivanje"<<endl;
	do{
		cout<<"Unesite slovo: "; cin>>b3;
	}while(b3<65 || b3>122);
	int i3;
	bool nadjen3=false;;
		
	for(int i=0;i<10;i++){
		if(a3[i]==b3){
			i3=i;
			nadjen3=true;
		}
	}
	if(nadjen3)	cout<<"Slovo "<<b3<<" je nadjeno. Indeks u polju je "<<i3<<", a ASCII kod "<<int(b3)<<endl;
	else cout<<"Trazeno slovo ne postoji u polju."<<endl;
	cout<<endl<<endl;
	
	//4
	char a4[10];
	for(int i=0;i<10;i++) {
		cout<<"Unesite "<<i+1<<". slovo: "; cin>>a4[i];
	}
	
	for(int i=1;i<10;i++){
		int j=i-1;
		char pom=a4[i];
		while(j>=0 && a4[j]<pom)
			a4[j+1]=a4[j--];
		a4[j+1]=pom;
	}	
	for(int i=0;i<10;i++) cout<<a4[i]<<" ";
	cout<<endl<<endl;
	
	//algoritam za broj pojava u polju
	int c=0;
	int v=a4[0];
	cout<<a4[0];
	for(int i=0; i<10; i++){
		if(a4[i] !=v){
			cout<<" "<<c<<endl;
			v=a4[i];
			c=1;
			cout<<a4[i];
		}
		else c++;
	}
	cout<<" "<<c<<endl<<endl;
	
	char samogl[]="aAeEiIoOuU";
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++)
			if(a4[i]==samogl[j])
				cout<<a4[i]<<" se nalazi na "<<i+1<<". mjestu u polju."<<endl;
	}
	cout<<endl<<endl;
	*/
	//5
	char a5[5][30];
	for(int i=0;i<5;i++){
		cout<<"Unesite "<<i+1<<". rijec: "; cin>>a5[i];
	}
	bool zamjena5=true;
	for(int i=4;i>0 && zamjena5; i--){
		zamjena5=false;
		for(int j=0;j<i;j++){
			if(strcmp(a5[j],a5[j+1])==1) {
				char pom[30];
				strcpy(pom,a5[j]);
				strcpy(a5[j],a5[j+1]);
				strcpy(a5[j+1],pom);
				zamjena5=true;
			}
		}
	}	
	for(int i=0;i<5;i++) cout<<a5[i]<<" ";
	
	for(int i=4;i>0 && zamjena5; i--){
		zamjena5=false;
		for(int j=0;j<i;j++){
			if(strcmp(a5[j],a5[j+1])==-1) {
				char pom[30];
				strcpy(pom,a5[j]);
				strcpy(a5[j],a5[j+1]);
				strcpy(a5[j+1],pom);
				zamjena5=true;
			}
		}
	}	
	for(int i=0;i<5;i++) cout<<a5[i]<<" ";
	
	
	return 0;
}
