#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
	int raspon=100;
	srand(time(0)); //inicijalizira generator slu�ajnih brojeva
	int trazeniBroj=rand()/(RAND_MAX/(raspon-1))+1;
	
	/*
	-funkcija rand() iz biblioteke cstdlib vra�a slu�ajni broj izme�u 0 i RAND_MAX
	-RAND_MAX=INT_MAX=32767 i tako�er se nalazi u cstdlib
	
	-Da bi generirali broj izme�u 1 i 100 potrebno je:
		broj koji vra�a funkcija rand() podijeliti sa 32767/99 i dodati 1 
		
	-Uzastopni pozivi funkcije rand() uvijek generiraju isti slijed slu�ajnih brojeva, a prvi poziv uvijek daje isti rezultat
	-Zbog toga pozivamo srand(), sjeme slu�ajnih brojeva koji postavlja po�etni "slu�ajno" generirani broj funkcije rand() na neku drugu vrijednost
	-Argument srand() funkcije je cijeli broj na osnovu kojeg �e se ra�unati vrijednost sjemena
		-mo�emo ga zadati sami ali bolje je to prepustiti ra�unalu pomo�u funkcije time iz biblioteke ctime koja u�itava trenutno sistemsko vrijeme u sekundama*/
		
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
