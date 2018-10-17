#include <iostream>
using namespace std;

void pocisti(int polje[], int duljina){
	while(duljina--)
		polje[duljina]=0;

};

void pocisti2(int *polje, int duljina){
	for(int i=0;i<duljina;i++){
		*polje=0;
		polje++;
	}

};

int duljinaStringa(char *niz){
	int i=0;
	while(*(niz+i)) i++;
	return i;
};

int main(){
	int p[]={3,6,9};
	pocisti(p,3);	
	cout<<p[0]<<endl<<p[1]<<endl<<p[2]<<endl;
	
	// Zadatak. Napišite definiciju ovako deklarirane funkcije pocisti() koristeci aritmetiku s pokazivacima
	int p2[]={3,6,9};
	pocisti2(p2,3);	
	cout<<p2[0]<<endl<<p2[1]<<endl<<p2[2]<<endl;
	
	char niz[]="Vidi malog.";
	cout<<duljinaStringa(niz);
				
	return 0;
}
