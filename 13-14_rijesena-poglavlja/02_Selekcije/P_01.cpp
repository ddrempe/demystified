#include <iostream>
#include <cmath>
using namespace std;
/*
ULAZ: Decimalni brojevi A, B, C
IZLAZ: Korijeni jednadže A*X2+B*X+C = 0
*/

int main(){
	float a,b,c,x;
	cout<<"Unesite a: "; cin>>a;
	cout<<"Unesite b: "; cin>>b;
	cout<<"Unesite c: "; cin>>c;
	
	if(a==0) {
		if(b!=0) cout<<"X= "<<-c/b<<endl; //rijesi linearnu jednadzbu B*X+C=0
		else
			if(c==0) cout<<"Bilo koji X je rjesenje. "<<endl;
			else cout<<"Nema rjesenja. "<<endl;
	}	
	else{
		float d=pow(b,2.)-4*a*c; //izracunaj diskriminantu
		if(d>=0) cout<<"X1= "<<(-b + sqrt(d))/(2*a)<<endl<<"X2= "<<(-b - sqrt(d))/(2*a) << endl; //izracunaj realèna rjesenja jednadžbe
		else cout<<"X1= "<< -b/(2*a) << "+"<< sqrt(-d)/(2*a)<< "i"<< endl<< "X2= "<< -b/(2*a) << "-"<< sqrt(-d)/(2*a)<< "i" << endl; //izracunaj kompleksna rjesenja
	}
	
	
	
	return 0;
}
