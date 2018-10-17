#include <iostream>
#include <fstream>
using namespace std;

int main(){
	//Ispis brojeva iz datoteke
	ifstream ulazniTok("brojevi.txt"); //stvara se objekt ulazniTok tipa (razreda) ifstream
	cout<<"Sadrzaj datoteke: "<<endl<<endl; 
	
	float broj;
	while((ulazniTok>>broj) !=0) cout<<broj<<endl; //slicno kao cin>>broj imamo ulazniTok>>broj
	
	//Izracun n faktorijela
	int n,fakt=1,i=1;
	cout<<"Upisite n: "; cin>>n;
	while(i<=n) {fakt*=i; i++;}
	cout<<"n faktorijela= "<<fakt;
	
	/*Ispis brojeva iz datoteke pomocu petlje for
	cout<<"Sadrzaj datoteke: "<<endl<<endl; 
	for(;(ulazniTok>>broj)!=0;)cout<<broj<<endl;*/
		
				
	return 0;
}
