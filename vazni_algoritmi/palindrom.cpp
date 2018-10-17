#include <iostream>
#include <cstring>
using namespace std;

/* ULAZ: Unijeti rijeè S
IZLAZ: Provjeriti je li S palindrom (rijeè koja se èita spreda i straga jednako). 
 cout<<"Unesite prirodni n: "; cin>>n */

int main () {
	char rijec[20];
	bool palindrom=true;
	cin>>rijec;
	int L=strlen(rijec);
	
	for(int i=0;i<L/2;i++)
		if(rijec[i]!=rijec[L-i-1]) palindrom=false;
		
	if(palindrom) cout<<"Rijec "<<rijec<<" je palindrom."<<endl;
	else cout<<"Rijec "<<rijec<<" nije palindrom."<<endl;
	
		
	return 0;
}
