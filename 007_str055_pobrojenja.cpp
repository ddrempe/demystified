#include <iostream>
using namespace std;

int main(){
	
	enum dani{pon,uto,sri,cet, pet,sub,ned}SunnyDay; //Varijable tipa dani mogu se deklarirati i neposredno uz definiciju pobrojenog tipa kao �to je ovdje SunnyDay.
	/*
	-Ovom deklaracijom uvodi se novi tip podataka dani, te sedam nepromjenjivih identifikatora (pon,uto,sri,..) toga tipa.
	-Prvom identifikatoru prevoditelj pridjeljuje vrijednost 0, drugom 1, itd.
	-Mo�emo definirati varijablu tipa dani i pridru�iti joj neku od vrijednosti niza. */
	
	dani HvalaBoguDanasJe=pet;
	dani NeVolim=pon;	
	cout<<HvalaBoguDanasJe<<" "<<NeVolim<<endl;
		
	SunnyDay=ned;
	cout<<SunnyDay<<endl;
	
	enum days{mon=1,tue,wed,thu,fri,sat,sun};
	/*
	-Podrazumijevana vrijednost prve varijable je 0, ali mo�e se i eksplicitno zadati �eljena vrijednost 
	npr. 1, tada drugi �lan tue ima vrijednost 2, wed vrijednost 3, itd.
	-Eksplicitno pridjeljivanje mo�e se primijeniti i na bilo koji od ostalih na�ina, s time da �e sljede�i �lan, ukoliko njegova vrijednost nije
	eksplicitno zadana imati za jedan ve�u vrijednost. */
	
	enum likovi{kruznica=0,
				trokut=3,
				pravokutnik=4,
				kvadrat=4,
				cetverokut=4,
				peterokut,
				sedmerokut=cetverokut+3};
				
	enum {NE=0,DA}YesMyBabyNo, ShouldIStayOrShouldIGo; //Ako nam ne treba vi�e varijabli tog tipa, ime tipa iza rije�i enum se mo�e izostaviti.
	YesMyBabyNo=NE;
	ShouldIStayOrShouldIGo=DA;
	cout<<YesMyBabyNo<<" "<<ShouldIStayOrShouldIGo<<endl;
	
	enum{dvostruki=2,trostruki};
	int i=5;
	float pi=3.14159;
	cout<<dvostruki*i<<" "<<trostruki*pi<<endl; //Pobrojane vrijednosti mogu se koristiti u aritmeti�kim izrazima.
	
	dani VelikiPetak=pet;
	/*
	-Pobrojanim tipovima se ne mogu pridru�ivati cjelobrojne vrijednosti, pa je ovo pogre�ka: dani DolaziZec=VelikiPetak+2;
	-Ispravno je sljede�e: */
		
	dani DolaziZec=dani(VelikiPetak+2);
	cout<<DolaziZec<<endl;
	
	/*
	- Prilikom zbrajanja pobrojeni tip VelikiPetak svodi se na zajedni�ki tip s brojem 2 (a to je int). Dobiveni rezultat tipa int treba pridru�iti
	pobrojenom tipu, �to rezultira gre�kom kod prevo�enja. Zato je bilo potrebno taj tip int pretvoriti u tip dani.	*/
			
	return 0;
}
