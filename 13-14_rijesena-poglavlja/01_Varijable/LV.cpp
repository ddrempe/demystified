#include <iostream>
using namespace std;

/*
Izradite program u kojem:
1. se na poèetku unose èetiri brojèane vrijednosti (brojevi mogu biti i decimalni) te se izraèuna i ispiše kvocijent 
prva dva unesena broja i umnožak druga dva unesena broja.
2. se prethodni rezultat ispiše u oktalnom brojevnom sustavu.
3. se prvi rezultat iz toèke 1 pretvori u cjelobrojni zapis i ispiše na ekran.
4. se unese još jedna cjelobrojna vrijednost.
5. se prethodne dvije cjelobrojne vrijednosti (iz toèaka 3 i 4) modularno podjele i rezultat se istovremeno ispiše u 
heksadecimalnom i decimalnom brojevnom sustavu. */

int main(){
	//1
	double a,b,c,d;
	cout<<"a: "; cin>>a;
	cout<<"b: "; cin>>b;
	cout<<"c: "; cin>>c;
	cout<<"d: "; cin>>d;
	cout<<"a/b= "<<a/b<<" "<<"c*d= "<<c*d<<endl;
	
	//2
	cout<<oct<<"a/b= "<<a/b<<" "<<"c*d= "<<c*d<<endl;
	cout<<dec;
	
	//3
	cout<<"a/b= "<<int(a/b+0.5)<<endl;
	
	//4
	int e;
	cout<<"e: "; cin>>e;
	
	//5
	cout<<int(a/b+0.5)%e<<" "<<hex<<int(a/b+0.5)%e<<endl;
	
			
	return 0;
}
