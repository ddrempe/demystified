#include <iostream>
using namespace std;

void zamjeniPrekoPokazivaca(int *a,int *b){
	int pom=*a;
	*a=*b;
	*b=pom;
};

void zamjeniPrekoReference(int &a,int &b){
	int pom=a;
	a=b;
	b=pom;
};

char *unesi(char *ime){
	cout<<"Upisi ime: ";
	ime=new char[100];
	cin>>ime;
	return ime;
};	

int main(){
	//Kada se funkciji argument prenese po vrijednosti tada se njegova vrijednost u pozivajuæem kodu ne mijenja
	
	//Zato nam je druga moguænost ovakav prijenos argumenta preko pokazivaèa
	int *prvi=new int,*drugi=new int;
	
	cout<<"Unesite prvi: "; cin>>*prvi;
	cout<<"Unesite drugi: "; cin>>*drugi;
	zamjeniPrekoPokazivaca(prvi,drugi);	
	cout<<"Prvi nakon zamjene: "<<*prvi<<endl;
	cout<<"Drugi nakon zamjene: "<<*drugi<<endl;
	
	//Elegantnije rješenje je prijenos po referenci
	int m,n;
	cout<<"Unesite m: "; cin>>m;
	cout<<"Unesite n: "; cin>>n;
	int &mref=m;
	int &nref=n;
	
	zamjeniPrekoReference(mref,nref);	
	cout<<"m nakon zamjene: "<<mref<<endl;
	cout<<"n nakon zamjene: "<<nref<<endl;
	
	//Promjena pokazivaèa unutar funkcije
	char *korisnik;
	korisnik=unesi(korisnik);
	cout<<korisnik<<endl;
	delete [] korisnik;
				
	return 0;
}
