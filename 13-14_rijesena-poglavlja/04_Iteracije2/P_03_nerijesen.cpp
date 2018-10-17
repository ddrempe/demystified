#include <iostream>

using namespace std;

/* 
ULAZ: Svaki se pravokutnik zadaje s dvije toèke u ravnini – donjim lijevim i gornjim desnim kutom. Pretpostavlja se da su stranice svih 
pravokutnika paralelne s koordinatnim osima. Potrebno je unositi pravokutnike sve dok se ne unese pravokutnik kojem je donji lijevi kut jednak gornjem desnom. 
Taj posljednji unos ne ulazi u izraèun.
IZLAZ: Potrebno je ispisati donji lijevi i gornji desni kut pravokutnika koji je presjek sviju unešenih pravokutnika ili 0 ako je presjek prazan. 
Program treba odmah stati ako presjek postane prazan.  */

int main(){
	float Ax, Bx, Ay, By, PAx, PAy, PBx, PBy;
	
	do {
		cout << "Upisite Ax Ay Bx By: "; cin >> PAx >> PAy >> PBx >> PBy;
	} while (PAx > PBx || PAy > PBy);
	
	do {
		do {
			cout << "Upisite Ax Ay Bx By: "; cin >> Ax >> Ay >> Bx >> By;
		} while (Ax > Bx || Ay > By); 		
 		if (Ax != Bx || Ay != By) {
			if (Ax > PAx) PAx = Ax;
			if (Ay > PAy) PAy = Ay;
			if (Bx < PBx) PBx = Ax;
			if (By < PBy) PBy = By;
		}
			
	} while (PAx<=PBx && PAy<=PBy || Ax==Bx && Ay==By);
		
	
	return 0;
}
