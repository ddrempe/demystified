#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
	int raspon=100;
	srand(time(0)); //inicijalizira generator sluèajnih brojeva
	int trazeniBroj=rand()/(RAND_MAX/(raspon-1))+1;
	
	/*
	-funkcija rand() iz biblioteke cstdlib vraæa sluèajni broj izmeðu 0 i RAND_MAX
	-RAND_MAX=INT_MAX=32767 i takoðer se nalazi u cstdlib
	
	-Da bi generirali broj izmeðu 1 i 100 potrebno je:
		broj koji vraæa funkcija rand() podijeliti sa 32767/99 i dodati 1 
		
	-Uzastopni pozivi funkcije rand() uvijek generiraju isti slijed sluèajnih brojeva, a prvi poziv uvijek daje isti rezultat
	-Zbog toga pozivamo srand(), sjeme sluèajnih brojeva koji postavlja poèetni "sluèajno" generirani broj funkcije rand() na neku drugu vrijednost
	-Argument srand() funkcije je cijeli broj na osnovu kojeg æe se raèunati vrijednost sjemena
		-možemo ga zadati sami ali bolje je to prepustiti raèunalu pomoæu funkcije time iz biblioteke ctime koja uèitava trenutno sistemsko vrijeme u sekundama*/
		
	int mojBroj;
	cout<<"Pogodite broj izmedju 1 i "<<raspon<<"."<<endl;
	do{
		cin>>mojBroj;
		if(mojBroj>trazeniBroj) cout<<"MANJE!"<<endl;
		else if(mojBroj<trazeniBroj) cout<<"VISE!"<<endl;
		}while(mojBroj!=trazeniBroj);
		
	cout<<"BINGO!"<<endl;
		
				
	return 0;
}
