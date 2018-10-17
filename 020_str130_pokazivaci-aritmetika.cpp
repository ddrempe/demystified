#include <iostream>
using namespace std;

int main(){
	// Zadatak. U polje brojeva sortiranih po velièini umetnuti novi èlan.
	int brClanova=9;
	int polje[20]={10,20,30,40,50,60,70,80,90};
	
	int *odrediste=polje+brClanova; //pokazivac na lokaciju iza zadnjeg broja
	int noviBroj=15;
	
	while(*(--odrediste) > noviBroj) {
		if (odrediste<polje) break //prošao je poèetak polja pa prekida petlju
		*(odrediste+1)=*odrediste; //pomièe veæe brojeve
	}
	*(odrediste+1)=noviBroj; //umeæe novi broj
	brClanova++;
			
	return 0;
}
