#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
/* 
Napravimo igru u kojoj �e ra�unalo zamisliti jedan cijeli broj od 1 � 100 i dozvoliti igra�u da 10 puta poga�a koji je broj zami�ljen. 
Ako igra� unese preveliki broj, ra�unalo vra�a poruku "Broj je prevelik"
Ako igra� unese premalen broj, ra�unalo mora vratiti poruku "Broj je premalen"
Ako igra� unese to�an broj, ra�unalo vra�a poruku "Pogodili ste u I pokusaja! Bravo!"
U slu�aju da igra� ne pogodi to�ni broj u 10 poku�aja, treba vratiti poruku "Na zalost niste pogodili u 10 pokusaja. Broj je bio B" */

int main(){
	int rbroj,ibroj;
	srand(time(0));
	rand();
	rbroj=rand()/(RAND_MAX/99)+1;
	
	cout<<"Pogodite broj izmedju 1 i 100. "<<endl;
	for(int i=1;i<=10;i++){
		cin>>ibroj;
		if(ibroj>rbroj) cout<<"Broj je prevelik!"<<endl;
		else if(ibroj<rbroj) cout<<"Broj je premalen!"<<endl;
		else {
			cout<<"Pogodili ste u "<<i<<" pokusaja. Bravo!"<<endl;
			return 0;
		}
	}
	cout<<"Na zalost niste pogodili u 10 pokusaja. Broj je bio "<<rbroj<<endl;
	return 0;
}
