#include <iostream>
using namespace std;
#define PI 3.14159

/* Izradite program u kojem:
1. Se raèuna površina plašta valjka s time da su i ulazni ali i izlazni podaci spremljeni u proizvoljan slog. 
Površina plašta valjka se raèuna po formuli P=2*r*pi*v. Nakon izraèuna rezultat se treba ispisati na zaslon.

2. Je potrebno pronaæi brojeve èiji umnožak sa svakim od ASCII kodova znakova 'z','A','g','h','N' daje rezultat iz prethodne toèke. 
Svaki dobiveni broj ali i sve ostale podatke spremati u isti slog te brojeve uzlazno sortirati preko sortiranja umetanjem. 
Dobivene brojeve kao i sortirano jednodimenzionalno polje ispisati na zaslon.

3. Se unose podaci za: ime, prezime, matièni broj, datum upisa na studij i predmeti za sve studente jedne godine (najviše 50). Nakon unosa svih podataka 
potrebno je izraèunati prosjek ocjena za svakog studenta te ih ispisati na zaslon, zajedno s pripadajuæim prosjekom te ostalim poznatim podacima, 
studenta s najmanjim i najveæim prosjekom. Algoritam realizirati pomoæu sloga. Koristiti metodu sortiranja pomoæu umetanja.

4. Se filtriraju svi studenti iz prethodne toèke èija imena su duža od 3 a prezimena kraæa od 7 znakova. Nakon toga se ti studenti sortiraju s obzirom na ime od
manjeg znakovnog niza k veæem. Pri tome je potrebno koristiti metodu mjehurièastog sortiranja. Sada se broj znakova u svakom drugom zapisu imena
zbraja a u ostalim oduzima. Prethodna suma daje pomak s obzirom na koji je potrebno kriptirati znakove iz 2. toèke Cezarovom šifrom s pomakom koji se unosi
s tipkovnice. Na zaslon je potrebno ispisati filtrirane studente, sortirani niz studenata, kriptografski pomak te originalne i kriptirane znakove.

5. Je algoritam iz 3. toèke modificiran da radi i za uèenike i za studente s time da su zajednièki atributi ime, prezime i matièni broj. Uz ove atribute studenti 
još imaju broj indeksa, predstavnik studenata (da/ne), smještaj u studentskom domu (da/ne) te potpora ministarstva (da/ne) dok uèenici imaju dužinu 
školovanja (3 ili 4 godine), grad u kojem se školuju te mjesto završene osnovne škole. Rješenje mora biti realizirano sa slogom i unijom. Uz obradu koja se 
dešava u 3. toèki mora se ponuditi i uzlazno i silazno sortiranje kod ispisa svih studenata odnosno uèenika. Algoritam mora biti neovisan s obzirom na toèku 3. */
 
int main(){
	//1
	struct{
		float r,v,P;
	}valjak;
	cout<<"Povrsina plasta valjka"<<endl;
	cout<<"Unesite r: "; cin>>valjak.r;
	cout<<"Unesite v: "; cin>>valjak.v;
	valjak.P=2*PI*valjak.r*valjak.v;
	cout<<"Povrsina: "<<valjak.P<<"m2"<<endl<<endl;
	
	//2
	struct{
		float a[5];
	}brojevi;
	brojevi.a[0]=valjak.P/'z';
	brojevi.a[1]=valjak.P/'A';
	brojevi.a[2]=valjak.P/'g';
	brojevi.a[3]=valjak.P/'h';
	brojevi.a[4]=valjak.P/'N';
	for(int i=1;i<5;i++){
		int j=i-1;
		float pom=brojevi.a[i];
		while(j>=0 && brojevi.a[j]>pom)
			brojevi.a[j+1]=brojevi.a[j--];
		brojevi.a[j+1]=pom;	
	}
	for(int i=0;i<5;i++) cout<<brojevi.a[i]<<" ";
	cout<<endl<<endl;
	

	return 0;
}
