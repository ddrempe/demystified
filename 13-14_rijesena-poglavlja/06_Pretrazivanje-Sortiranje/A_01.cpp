#include <iostream>
using namespace std;

/* ULAZ: Prirodni broj N i N decimalnih brojeva A[0], ..., A[N-1] i broj i, 0<=i<N
IZLAZ: Broj A[k] koji je i-ti  broj po velièini u polju. */
 
int main(){	
	int n;
	do{
	cout<<"Unesite prirodni broj n: "; cin>>n;
	}while(n<1);
	float a[n];		
	
	for(int i=0;i<n;i++){
		cout<<"Unesite "<<i+1<<". element: "; cin>>a[i];
	}
	
	for(int i=n;i>1;i--){
		int max=0;
		for(int j=1;j<i;j++)
			if(a[j]>a[max]) max=j;
		float pom=a[i-1];
		a[i-1]=a[max];
		a[max]=pom;		
	}
	cout<<endl<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl<<endl;
	
	int k;
	do{
	cout<<"Koji broj po velicini zelite ispisati? "; cin>>k;
	}while(k<=1 || k>=n);
	cout<<a[--k]<<endl;
	
	return 0;
}
