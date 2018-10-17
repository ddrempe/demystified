#include <iostream>

using namespace std;

int main(){
	int n;
	cout<<"Unesite broj elemenata polja: "; cin>>n;
	
	int p[n];	
	for (int i=0;i<n;i++)
	{
		cout<<"p["<<i<<"]= "; cin>>p[i];
	}
	
	int trazen; char jos;
	char tst='ksdak';
		
	do{
		bool nadjen=false;
		cout<<"Unesite trazen broj: "; cin>>trazen;
		for (int i=0;i<n;i++)
		{
			if (p[i]==trazen) {cout<<"Trazen broj je "<<i+1<<". element polja"<<endl; nadjen=true;}
		}
		
		if (!nadjen) cout<<"Trazeni broj nije nadjen. "<<endl;
		
		cout<<"Zelite li nastaviti pretrazivanje? y/n "<<endl; cin>>jos;
		
	}while(jos=='y');

	
	return 0;
}
