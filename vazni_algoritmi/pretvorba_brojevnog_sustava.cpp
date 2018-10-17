#include <iostream>
using namespace std;

/* ULAZ: Prirodni broj N<=1000 i prirodni broj B
IZLAZ: Broj N zapisan u bazi B.
 */
 
int main () {
	
	unsigned short n,n2,b,a[100];
	do{
	cout<<"Unesite prirodni broj n<=1000: "; cin>>n;
	}while(n<1||n>1000);	
	do{
	cout<<"Unesite bazu brojevnog sustava u koji zelite prebaciti broj n: "; cin>>b;
	}while(b<2||b>1000);
	n2=n;
	
	int i;
	for(i=0;n%b;i++){
		a[i]=n%b;
		n/=b;
	}
	
	cout<<endl<<"n(10)= "<<n2<<" \t"<<"n("<<b<<")= ";
	for(int j=i-1;j>=0;j--){
		if(a[j]>=0&&a[j]<=9) cout<<char(a[j]+48);
		else cout<<char(a[j]+55);
	}
	
	
	return 0;
}
