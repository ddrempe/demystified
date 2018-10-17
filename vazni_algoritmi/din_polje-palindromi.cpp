#include <iostream>
#include <cstring> //strlen()
using namespace std;

/* ULAZ: U dinamicki alocirano polje unijeti n<=50 rijeci.
IZLAZ: Za svaku rijeci ispisati da li je palindrom, ako nije ispisati ju naopacke.
*/

int main(){
	int n;
	do{
		cout<<"Koliko rijeci zelite? "; cin>>n;
	}while(n>50 || n<1);
		
	char (*a)[20]=new char[n][20];
	cin.ignore();
	for(int i=0;i<n;i++){
		cout<<"Unesite "<<i+1<<". rijec:";
		cin.getline(a[i],sizeof(a[i]));
	}	
	
	for(int i=0;i<n;i++){
		bool palindrom=true;
		int l=strlen(a[i]);
		
		for(int j=0;j<l/2;j++)
			if(a[i][j] != a[i][l-1-j]) palindrom=false;
		if(palindrom) cout<<"Rijec "<<a[i]<<" je palindrom.";
		else for(int k=l-1; k>=0; k--) cout<<a[i][k];
		cout<<endl;
	}
	
	delete [] a;
		
	return 0;
}
