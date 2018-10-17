#include <iostream>
#include <cstring>
#include <cctype> //toupper() tolower()

using namespace std;

int main(){
	char prvi[]="Vidi";
	char drugi[20]="malog";
	char razmak[]=" ";
	int duljina=strlen(prvi)+strlen(drugi)+strlen(razmak);
	char *oba=new char[duljina+1];
	
	strcpy(oba,prvi);
	strcpy(oba,razmak);
	strcpy(oba,drugi);
	int usporedba=strcmp(prvi,oba);
	if(usporedba){
		if(usporedba>0) cout<<"Prvi znakovni niz je dulji."<<endl;
		else cout<<"Drugi znakovni niz je dulji."<<endl;
	}
	else cout<<"Znakovni nizovi su jednaki. "<<endl;
	
	//Zadatak. Što æe se ispisati?
	cout<<strlen("\"101\"")<<endl;
	cout<<"\"101\"";
	cout<<strlen("pet")<<endl;
	
	//Zadatak. Što æe se ispisati?
	char deponij[25];
	strcpy(deponij,"kanal");
	strcpy(deponij + 3,"tata u F-duru");
	cout<<deponij<<endl;
	
	//funkcije toupper() i tolower()
	char veliki[]="OVA SU SLOVA VELIKA";
	char mali[]="ova su slova mala";	
	//preko indeksa polja: 
	for(int i=0;i<strlen(mali);i++) mali[i]=toupper(mali[i]);
	cout<<mali<<endl;
		
	//preko pokazivaca
	char *pok=veliki;
	while(*pok){
		*(pok)=tolower(*pok);
		*(pok++);
	};
	cout<<veliki<<endl;
					
	return 0;
}
