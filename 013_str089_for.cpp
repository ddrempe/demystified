#include <iostream>
#include <iomanip> //manipulator za ispis setw(). Argument (cijeli broj) odre�uje koliki �e se najmanji prostor predvidjeti za ispis podatka koji slijedi u toku.
using namespace std;

int main(){
	// for(1. po�etni_izraz, 2. uvjet_izvo�enja, 4. izraz_prirasta) {3. blok naredbi}
	
	//Ispis n faktorijela
	int n,fakt=1;
	cout<<"Unesite n: "; cin>>n;
	for(int i=2;i<=n;i++) fakt*=i;
	cout<<"n faktorijela: "<<fakt<<endl;
	
	//Ispis malih i velikih slova engleske abecede s pripadaju�im ascii kodovima u 4 stupca
	cout<<endl<<"ASCII tablica slova"<<endl;
	for(int i=0;i<=90;i++) cout<<setw(5)<<i<<setw(5)<<char(i)<<setw(5)<<i+32<<setw(5)<<char(i+32)<<endl;
	
	//Ispis tablice mno�enja
	cout<<endl<<"Tablica mnozenja"<<endl;
	for(int redak=1;redak<=10;redak++)
	{
		for(int stupac=1;stupac<=10;stupac++) cout<<setw(5)<<redak*stupac;
		cout<<endl;
	}
	
	//Ispis donjeg lijevog trokuta tablice mno�enja
	cout<<endl<<"Tablica mnozenja"<<endl;
	for(int redak=1;redak<=10;redak++)
	{
		for(int stupac=1;stupac<=redak;stupac++) cout<<setw(5)<<redak*stupac;
		cout<<endl;
	}
	
	//Ispis gornjeg desnog trokuta tablice mno�enja
	cout<<endl<<"Tablica mnozenja"<<endl;	
	int stupac=0, redak=0;
    for (redak=1;redak<=10;redak++) 
	{
       for (stupac=1; stupac<redak; ++stupac) cout<< setw(5) << "";
       for(; stupac<=10; stupac++) cout<<setw(5)<<redak*stupac;
       cout<<endl;
   }
				
	return 0;
}
