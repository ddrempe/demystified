#include <iostream>
using namespace std;

int main(){
	
	const double *elektron=new const double (1.6e-19); 
	delete elektron;
	/* pri stvaranju pokaziva�a na konstantu (pomo�u operatora new)
	vrijednost konstante MORA biti inicijalizirana u okruglim zagradama ina�e dolazi do gre�ke */
    
    const float e=2.71;
	const float *pok=NULL;
	pok=&e; //preusmjeravanje pokaziva�a na konstantu e
	/* na nepromjenjivi objekt npr. e, smiju se preusmjeriti samo pokaziva�i deklarirani da pokazuju
	na nepromjenjive objekte - ispred tipa navodi se rije� const */
	cout<<*pok;
	
	float a=1.2;
	pok=&a; //pokaziva� na nepromjenjivi objekt se smije preusmjeriti na promjenjivi objekt
	a=6; //promjena vrijednosti mogu�a samo direktno
	//*pok=6; //nije mogu�e ovako preko pokaziva�a jer je pok pokaziva� na nepromjenjivi objekt
	
	int *broj=6;
	
    			
	return 0;
}
