#include <iostream>
using namespace std;

/*
Izradite program u kojem:
1. se na po�etku unose �etiri broj�ane vrijednosti (brojevi mogu biti i decimalni) te se izra�una i ispi�e kvocijent 
prva dva unesena broja i umno�ak druga dva unesena broja.
2. se prethodni rezultat ispi�e u oktalnom brojevnom sustavu.
3. se prvi rezultat iz to�ke 1 pretvori u cjelobrojni zapis i ispi�e na ekran.
4. se unese jo� jedna cjelobrojna vrijednost.
5. se prethodne dvije cjelobrojne vrijednosti (iz to�aka 3 i 4) modularno podjele i rezultat se istovremeno ispi�e u 
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
