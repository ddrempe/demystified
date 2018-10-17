#include <iostream>
using namespace std;

/* 
ULAZ: Prirodni broj N i N decimalnih brojeva A1, ..., An
IZLAZ: Aritmetièka sredina brojeva A1 do An */

int main(){
	int n;
	float broj,sum=0;
	cout<<"Unesite n: "; cin>>n;
	
	for(int i=0;i<n;i++) {
		cout<<"Unesite "<<i+1<<". broj: ";
		cin>>broj;
		sum+=broj;
	}
	
	cout<<"Aritmeticka sredina unesenih brojeva je: "<<sum/n<<endl;
	
	return 0;
}
