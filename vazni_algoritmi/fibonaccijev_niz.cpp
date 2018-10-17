#include <iostream>
using namespace std;

/* 
ULAZ: Prirodni broj N
IZLAZ: Ispisati FN koji je definiran kao F0 = F1 = 1 Fk = Fk-1 + Fk-2, za k>1*/

int main(){
	cout<<"Izracun prvih M brojeva Fibonaccijevog niza"<<endl;
	int m;
	do{
		cout<<"Unesite M: "; cin>>m;
	}while(m<1 || m>1000);
	
	int p3[m];
	p3[0]=0,p3[1]=1,p3[2]=1; 
	for(int i=3; i<m; i++) p3[i]=p3[i-1]+p3[i-2];
	for(int i=0; i<m; i++) cout<<p3[i]<<" ";
	cout<<endl<<endl;
	
	return 0;
}
