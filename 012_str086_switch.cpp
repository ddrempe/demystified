#include <iostream>
using namespace std;

int main(){
	int dan,mjesec,godina,datum;
	cout<<"Upisi dan: "; cin>>dan;
	cout<<"Upisi mjesec: "; cin>>mjesec;
	cout<<"Upisi godinu: "; cin>>godina;
	
	if(mjesec<3) datum=365*godina+dan+31*(mjesec-1)+(godina-1)/4-3*((godina-1)/100+1)/4;
	else datum=365*godina+dan+31*(mjesec-1)-int(0.4*mjesec+2.3)+godina/4-3*(godina/100+1)/4;
	
	cout<<"Datum "<<dan<<"."<<mjesec<<"."<<godina<<". pada u ";
	
	switch(datum%7) {		
		case 0:
			cout<<"subotu."<<endl;
			break;
		case 1:
			cout<<"nedjelju."<<endl;
			break;		
		case 2:
			cout<<"ponedjeljak."<<endl;
			break;		
		case 3:
			cout<<"utorak."<<endl;
			break;		
		case 4:
			cout<<"srijedu."<<endl;
			break;		
		case 5:
			cout<<"cetvrtak."<<endl;
			break;
		default:
			cout<<"petak."<<endl;		
		
		}
	
	
	
				
	return 0;
}
