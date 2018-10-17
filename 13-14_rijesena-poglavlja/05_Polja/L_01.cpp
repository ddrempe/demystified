#include <iostream>
using namespace std;

/* ULAZ: Niz cijelih brojeva
IZLAZ: Najmanji broj u nizu */
 
int main(){
	int n;
	do{
		cout<<"Koliko brojeva zelite? "; cin>>n;
	}while(n<1 || n>1000);
	
	int a[n];
	int min=INT_MAX;
	for(int i=0;i<n;i++){
		cout<<"Upisite "<<i+1<<". broj: "; cin>>a[i];
		if(a[i]<min) min=i;
	}
	
	cout<<"Najmanji je "<<a[i]<<endl;
	
	return 0;
}
