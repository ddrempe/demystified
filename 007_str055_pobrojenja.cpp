#include <iostream>
using namespace std;

int main(){
	
	enum dani{pon,uto,sri,cet, pet,sub,ned}SunnyDay; //Varijable tipa dani mogu se deklarirati i neposredno uz definiciju pobrojenog tipa kao što je ovdje SunnyDay.
	/*
	-Ovom deklaracijom uvodi se novi tip podataka dani, te sedam nepromjenjivih identifikatora (pon,uto,sri,..) toga tipa.
	-Prvom identifikatoru prevoditelj pridjeljuje vrijednost 0, drugom 1, itd.
	-Možemo definirati varijablu tipa dani i pridružiti joj neku od vrijednosti niza. */
	
	dani HvalaBoguDanasJe=pet;
	dani NeVolim=pon;	
	cout<<HvalaBoguDanasJe<<" "<<NeVolim<<endl;
		
	SunnyDay=ned;
	cout<<SunnyDay<<endl;
	
	enum days{mon=1,tue,wed,thu,fri,sat,sun};
	/*
	-Podrazumijevana vrijednost prve varijable je 0, ali može se i eksplicitno zadati željena vrijednost 
	npr. 1, tada drugi èlan tue ima vrijednost 2, wed vrijednost 3, itd.
	-Eksplicitno pridjeljivanje može se primijeniti i na bilo koji od ostalih naèina, s time da æe sljedeæi èlan, ukoliko njegova vrijednost nije
	eksplicitno zadana imati za jedan veæu vrijednost. */
	
	enum likovi{kruznica=0,
				trokut=3,
				pravokutnik=4,
				kvadrat=4,
				cetverokut=4,
				peterokut,
				sedmerokut=cetverokut+3};
				
	enum {NE=0,DA}YesMyBabyNo, ShouldIStayOrShouldIGo; //Ako nam ne treba više varijabli tog tipa, ime tipa iza rijeèi enum se može izostaviti.
	YesMyBabyNo=NE;
	ShouldIStayOrShouldIGo=DA;
	cout<<YesMyBabyNo<<" "<<ShouldIStayOrShouldIGo<<endl;
	
	enum{dvostruki=2,trostruki};
	int i=5;
	float pi=3.14159;
	cout<<dvostruki*i<<" "<<trostruki*pi<<endl; //Pobrojane vrijednosti mogu se koristiti u aritmetièkim izrazima.
	
	dani VelikiPetak=pet;
	/*
	-Pobrojanim tipovima se ne mogu pridruživati cjelobrojne vrijednosti, pa je ovo pogreška: dani DolaziZec=VelikiPetak+2;
	-Ispravno je sljedeæe: */
		
	dani DolaziZec=dani(VelikiPetak+2);
	cout<<DolaziZec<<endl;
	
	/*
	- Prilikom zbrajanja pobrojeni tip VelikiPetak svodi se na zajednièki tip s brojem 2 (a to je int). Dobiveni rezultat tipa int treba pridružiti
	pobrojenom tipu, što rezultira greškom kod prevoðenja. Zato je bilo potrebno taj tip int pretvoriti u tip dani.	*/
			
	return 0;
}
