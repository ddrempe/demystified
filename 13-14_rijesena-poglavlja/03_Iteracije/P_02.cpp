#include <iostream>
using namespace std;
/* 
ULAZ: Niz decimalnih brojeva A1, ..., An. Upis brojeva se zaustavlja kada se upiše 0. Sam broj 0 ne ulazi u niz
IZLAZ: Ispisati maksimalni i minimalni unešeni broj, kao i koji je aksimalni i minimalni broj bio upisan po redu.
 */
int main(){
	int n,min=INT_MAX,max=INT_MIN,imax,imin;	
	float broj;
	
	for(int i=1;;i++){
		cout<<"Unesite "<<i<<". broj: ";
		cin>>broj;
		if(!broj) break;
		else{
			if(broj>max) {max=broj; imax=i;}
			if(broj<min) {min=broj; imin=i;}			
		}
	}
	
	cout<<"Najveci broj je "<<imax<<". po redu, a iznosi: "<<max<<endl;
	cout<<"Najmanji broj je "<<imin<<". po redu, a iznosi: "<<min<<endl;
	
	return 0;
}
