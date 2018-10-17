#include <iostream>
using namespace std;

/* 
ULAZ: Prirodni brojevi A i B
IZLAZ: Najveæa zajednièka mjera (djelitelj) brojeva A i B */

int main(){
	unsigned short a,b,pom;
	cout<<"Unesite pozitivni cijeli broj a: "; cin>>a;
	cout<<"Unesite pozitivni cijeli broj b: "; cin>>b;
	
	if(a<b){
		pom=a;
		a=b;
		b=pom;	
	}
	
	while(a%b){
		pom=b;
		b=a%b;
		a=pom;		
	}
	cout<<"Najveca zajednicka mjera je "<<b<<endl;
	
	
	
	/* moj nacin
	unsigned short nzm,i=1;
	if(a<b){
		pom=a;
		a=b;
		b=pom;	
	}
	else if(a==b) {
		cout<<"Najveca zajednicka mjera je "<<a<<endl;
		return 0;		
	}
	
	while(i<=b){
		if(a%i==0&&b%i==0) nzm=i;
		i++;
	}
	cout<<"Najveca zajednicka mjera je "<<nzm<<endl; */
	
	
	
	return 0;
}
