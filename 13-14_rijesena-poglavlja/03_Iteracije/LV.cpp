#include <iostream>
using namespace std;

/* 
Izradite program u kojem:
1. Korisnik unosi jedan cijeli broj. Nakon toga se, koristeci for petlju, ispisuju na ekran svi brojevi od 1 pa sve do unesene vrijednosti 
(za 3 se ispisuje 1, 2, 3).
2. Korisnik unosi 5 brojeva (mogu biti cijeli i decimalni) te se na ekran ispisuje njihova suma i aritmetièka sredina. Rješenje realizirati pomocu for petlje.
3. Korisnik unosi jedan cijeli broj. Na ekran se potom ispisuje komplement unesenog broja u decimalnom obliku. Korisnik potom unosi drugi cijeli broj. Unesenom
broju se bitovi pomièu za 5 mjesta ulijevo te se nakon toga isti broj ispisuje na ekran u decimalnom obliku.
4. Korisnik unosi 5 cijelih brojeva. Ukoliko je bilo koji od njih broj 3, na ekran se ispisuje poruka „Pogodak“ i program završava. 
Ukoliko korisnik unese svih 5 brojeva a meðu njima ne bude broj 3 tada se na ekran ispisuje proruka („Pogreška“) i program završava. 
U rješavanju zadatka koristiti for petlju, if uvjet i goto skok.
5. Korisnik unosi cijeli broj izmeðu 10 i 20 te se nakon toga u for petlji ispisuju svi parni brojevi od 1 do unesenog broja. 
Rješenje treba realizirati koristeci naredbu continue. */

int main(){
	//1
	int a;
	cout<<"Unesite cijeli broj: "; cin>>a;
	for(int i=1;i<=a;i++) cout<<i<<" ";
	cout<<endl<<endl;
	
	//2
	float sum=0,broj;
	for(int i=1;i<=5;i++){
		cout<<"Unesite "<<i<<". broj: "; cin>>broj;
		sum+=broj;
	}
	cout<<"Suma je "<<sum<<", a aritmeticka sredina "<<sum/5<<endl<<endl;
	
	//3
	int b,c;
	cout<<"Unesite cijeli broj: "; cin>>b;
	cout<<"Komplement: "<<~b<<endl;
	cout<<"Unesite cijeli broj: "; cin>>c;
	cout<<"Posmak broja ulijevo za 5 bitova: "<<(c<<5)<<endl<<endl;
	
	//4
	int d;
	for(int i=1;i<=5;i++){
		cout<<"Unesite "<<i<<". cijeli broj: "; cin>>d;
		if(d==3) {
			cout<<"Pogodak!"<<endl<<endl;
			goto kraj;
			}	
	}
	cout<<"Pogreska!"<<endl<<endl;
	
	//5
	int e;
	cout<<"Unesite cijeli broj u rasponu 10-20: "; cin>>e;
	for(int i=1;i<=e;i++){
		if(i%2) continue;
		else cout<<i<<" ";
	}
	cout<<endl;
		
	kraj: return 0;
}
