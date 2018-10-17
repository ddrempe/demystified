#include <iostream>
#include <cstring> //strlen()
using namespace std;

/* ULAZ: Unijeti prirodni broj N i N rijeèi
IZLAZ: Ispisati rijeèi od posljednje prema prvoj, a svaku rijeè naopako. */

int main(){
	int n;
	do{
		cout<<"n: "; cin>>n;
	}while(n<1);
	
	char (*a)[20]=new char[n][20];
	cin.ignore();
	for(int i=0;i<n;i++){
		cout<<"Unesite "<<i+1<<". rijec: ";
		cin.getline(a[i],sizeof(a[i]));
	}
	
	for(int i=n-1;i>=0;i--){
		for(int j=strlen(a[i])-1; j>=0;j--){
			cout<<a[i][j];
		}
		cout<<endl;
	}
	
}
