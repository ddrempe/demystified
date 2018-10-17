#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

/*
ULAZ: Prirodni brojevi N,L,K
IZLAZ: N decimalnih pseudoslucajnih brojeva izmeðu L i K. (L<K);


	0-n							0-99
	broj=rand() % (n+1);			broj=rand() % 100;
	
	1-n							1-100
	broj=rand() % n+1;			broj=rand() % 100+1;
	
	l-k							1985-2014
	broj=rand() % (k-l+1) + l;	broj=rand() % 30 + 1985;
	
								10-100
								broj=rand() % 91 + 10;
	*/

int main(){
	int n,k,l;
	cout<<"Ispis N decimalnih pseudoslucajnih brojeva izmedju L i K. (L<K) "<<endl;
	do{
		cout<<"N: "; cin>>n;
	}while(n<2||n>1000);
	
	float *a=new float[n];
	
	do{
	cout<<"Unesite L: "; cin>>l;
	cout<<"Unesite K: "; cin>>k;	
	}while(l>k);
	k*=100;
	l*=100;
	
	srand(time(0));
	rand();
	for(int i=0;i<n;i++){
		a[i]=rand()%(k-l+1)+l;
		if(a[i]!=0) a[i]/=100;
	}
	
	for(int i=1;i<n;i++){
		int j=i-1;
		float pom=a[i];
		while(j>=0 && a[j]>pom)
			a[j+1]=a[j--];
		a[j+1]=pom;
	}
			
	for(int i=0;i<n;i++){
		cout<<setw(9)<<a[i];
	}
	cout<<endl<<endl;
	
	return 0;
}
