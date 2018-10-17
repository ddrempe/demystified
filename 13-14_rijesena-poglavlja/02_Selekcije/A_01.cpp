#include <iostream>
using namespace std;
/*
ULAZ: Decimalni brojevi A i B
IZLAZ: |A+B| */

int main(){
	float a,b;
	cout<<"a: "; cin>>a;
	cout<<"b: "; cin>>b;
	
	(a+b)>0?cout<<"|a+b|= "<<a+b<<endl:cout<<"|a+b|= "<<-(a+b)<<endl;
		
	/* 
	Operator ? : je jedini ugraðeni ternarni operator u programskom jeziku C++. 
	On ima sljedeæi oblik: logicki izraz ? aritmeticki izraz 1 : aritmeticki izraz 2  */	
}
