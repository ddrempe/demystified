#include <iostream>
using namespace std;

int main(){
	
	const double *elektron=new const double (1.6e-19); 
	delete elektron;
	/* pri stvaranju pokazivaèa na konstantu (pomoæu operatora new)
	vrijednost konstante MORA biti inicijalizirana u okruglim zagradama inaèe dolazi do greške */
    
    const float e=2.71;
	const float *pok=NULL;
	pok=&e; //preusmjeravanje pokazivaèa na konstantu e
	/* na nepromjenjivi objekt npr. e, smiju se preusmjeriti samo pokazivaèi deklarirani da pokazuju
	na nepromjenjive objekte - ispred tipa navodi se rijeè const */
	cout<<*pok;
	
	float a=1.2;
	pok=&a; //pokazivaè na nepromjenjivi objekt se smije preusmjeriti na promjenjivi objekt
	a=6; //promjena vrijednosti moguæa samo direktno
	//*pok=6; //nije moguæe ovako preko pokazivaèa jer je pok pokazivaè na nepromjenjivi objekt
	
	int *broj=6;
	
    			
	return 0;
}
