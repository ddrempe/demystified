#include <iostream>
using namespace std;
#define PI 3.14159

/* Izradite program u kojem:
1. Se ra�una povr�ina pla�ta valjka s time da su i ulazni ali i izlazni podaci spremljeni u proizvoljan slog. 
Povr�ina pla�ta valjka se ra�una po formuli P=2*r*pi*v. Nakon izra�una rezultat se treba ispisati na zaslon.

2. Je potrebno prona�i brojeve �iji umno�ak sa svakim od ASCII kodova znakova 'z','A','g','h','N' daje rezultat iz prethodne to�ke. 
Svaki dobiveni broj ali i sve ostale podatke spremati u isti slog te brojeve uzlazno sortirati preko sortiranja umetanjem. 
Dobivene brojeve kao i sortirano jednodimenzionalno polje ispisati na zaslon.

3. Se unose podaci za: ime, prezime, mati�ni broj, datum upisa na studij i predmeti za sve studente jedne godine (najvi�e 50). Nakon unosa svih podataka 
potrebno je izra�unati prosjek ocjena za svakog studenta te ih ispisati na zaslon, zajedno s pripadaju�im prosjekom te ostalim poznatim podacima, 
studenta s najmanjim i najve�im prosjekom. Algoritam realizirati pomo�u sloga. Koristiti metodu sortiranja pomo�u umetanja.

4. Se filtriraju svi studenti iz prethodne to�ke �ija imena su du�a od 3 a prezimena kra�a od 7 znakova. Nakon toga se ti studenti sortiraju s obzirom na ime od
manjeg znakovnog niza k ve�em. Pri tome je potrebno koristiti metodu mjehuri�astog sortiranja. Sada se broj znakova u svakom drugom zapisu imena
zbraja a u ostalim oduzima. Prethodna suma daje pomak s obzirom na koji je potrebno kriptirati znakove iz 2. to�ke Cezarovom �ifrom s pomakom koji se unosi
s tipkovnice. Na zaslon je potrebno ispisati filtrirane studente, sortirani niz studenata, kriptografski pomak te originalne i kriptirane znakove.

5. Je algoritam iz 3. to�ke modificiran da radi i za u�enike i za studente s time da su zajedni�ki atributi ime, prezime i mati�ni broj. Uz ove atribute studenti 
jo� imaju broj indeksa, predstavnik studenata (da/ne), smje�taj u studentskom domu (da/ne) te potpora ministarstva (da/ne) dok u�enici imaju du�inu 
�kolovanja (3 ili 4 godine), grad u kojem se �koluju te mjesto zavr�ene osnovne �kole. Rje�enje mora biti realizirano sa slogom i unijom. Uz obradu koja se 
de�ava u 3. to�ki mora se ponuditi i uzlazno i silazno sortiranje kod ispisa svih studenata odnosno u�enika. Algoritam mora biti neovisan s obzirom na to�ku 3. */
 
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
