#include <iostream>
using namespace std;

int main(){
	// Zadatak. U polje brojeva sortiranih po veli�ini umetnuti novi �lan.
	int brClanova=9;
	int polje[20]={10,20,30,40,50,60,70,80,90};
	
	int *odrediste=polje+brClanova; //pokazivac na lokaciju iza zadnjeg broja
	int noviBroj=15;
	
	while(*(--odrediste) > noviBroj) {
		if (odrediste<polje) break //pro�ao je po�etak polja pa prekida petlju
		*(odrediste+1)=*odrediste; //pomi�e ve�e brojeve
	}
	*(odrediste+1)=noviBroj; //ume�e novi broj
	brClanova++;
			
	return 0;
}
