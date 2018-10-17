#include <iostream>
using namespace std;

/* ULAZ: ULAZ: Prirodni brojevi n i k.
IZLAZ: n povrh k faktorijela */
int faktorijela(int a){
	if (a==0) return 1;
	else {
	int f=1;
	for(int i=2;i<=a;i++) f*=i;
	return f;
	}
}

int main(){
	int n,k;
	do{
	cout<<"Unesite n: "; cin>>n;
	cout<<"Unesite k: "; cin>>k;
	}while(n<0||k<0);
	
	cout<<faktorijela(n)/(faktorijela(k)*faktorijela(n-k))<<endl;
	
	
}
