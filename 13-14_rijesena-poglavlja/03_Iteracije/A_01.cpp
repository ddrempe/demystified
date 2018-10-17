#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
/* 
Napravimo igru u kojoj æe raèunalo zamisliti jedan cijeli broj od 1 – 100 i dozvoliti igraèu da 10 puta pogaða koji je broj zamišljen. 
Ako igraè unese preveliki broj, raèunalo vraæa poruku "Broj je prevelik"
Ako igraè unese premalen broj, raèunalo mora vratiti poruku "Broj je premalen"
Ako igraè unese toèan broj, raèunalo vraæa poruku "Pogodili ste u I pokusaja! Bravo!"
U sluèaju da igraè ne pogodi toèni broj u 10 pokušaja, treba vratiti poruku "Na zalost niste pogodili u 10 pokusaja. Broj je bio B" */

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
