#include <iostream>
#include <cstdlib> //atoi
#include <fstream> 
using namespace std;
int main(){
	int broj;
	fstream dat;
	dat.open("brojevi.txt",ios::out);
	cout<<"Upisite 5 cijelih brojeva: "<<endl;
	for(int i=0;i<5;i++){
		cout<<i+1<<"= ";
		cin>>broj; //upis broja u cjelobrojnu varijablu broj
		dat<<broj<<endl; //upisivanje broja iz varijable broj u datoteku
	}
	dat.close();
	dat.clear();
	cout<<endl<<"Brojevi uspjesno upisani u datoteku brojevi.txt"<<endl;
	cout<<"___________________________________"<<endl;
	
	
	cout<<endl<<"Ispis brojeva iz datoteke i upis u pomocno polje"<<endl;
	char pbroj[10]; //pomocni string za broj do 10 znamenaka
	int brojevi[5]; //pomocno polje za 5 brojeva
	fstream dat2;
	dat2.open("brojevi.txt",ios::in);
	for(int i=0;i<5;i++){
	   dat2.getline (pbroj,sizeof(pbroj),'\n');	// èitanje reda iz datoteke, odnosno jednog broja
	   if (dat2.eof()) break;
	   cout<<pbroj<<endl; //ispis broja
	   
	   brojevi[i]=atoi(pbroj); //atoi - array to int - pretvara string u integer
	}
	dat2.close();
	dat2.clear();
	
	cout<<endl<<"Ispis brojeva iz polja"<<endl;
	for(int i=0;i<5;i++)
		cout<<brojevi[i]<<endl;

	
	system("PAUSE");
	return 0;
}
