#include <iostream>
#include <cstring>
using namespace std;

/* ULAZ: Tekst T, cijeli broj N i polje od N pozitivnih cijelih brojeva K[0]..K[n-1], te karakter 'E' ili 'D'
IZLAZ: Tekst koji se kriptira tako da se prvi znak u poruci pomièe za K[0] mjesta u ASCII tablici, drugi za K[1] mjesta u ASCII tablici , ..., 
N-ti za K[N-1], N+1 opet za K[0] itd. S obzirom na to je li unešen 'D' ili 'E' treba enkriptirati ili dekriptirati poruku s obzirom na kljuè. 
 */
 
int main(){
	char t[1000], izbor;
	int k[10],n;
	cout<<"Unesite tekst: ";
	cin.getline(t,1000);
	int l=strlen(t);
	
	do{
		cout<<"Unesite prirodni broj n: "; cin>>n;
	}while(n<1 || n>10);
	
	for(int i=0;i<n;i++){
		cout<<"Unesite  "<<i+1<<". broj iz niza kljuceva: "; cin>>k[i];
	}		
	
	do{
	cout<<"Zelite li enkriptirati ili dekriptirati poruku? E/D: "; cin>>izbor;
	}while(izbor!='E' && izbor!='D');	
	
	if(izbor=='E'){
		for (int i=0,j=0;i<l;i++,j++){		
			if(j==n) j=0;
			t[i]+=k[j];		
		}
		cout<<"Enkriptirani tekst:"<<endl<<t<<endl;;
	}	
	else{
		for (int i=0,j=0;i<l;i++,j++){		
			if(j==n) j=0;
			t[i]-=k[j];		
		}
		cout<<"Dekriptirani tekst:"<<endl<<t<<endl;;
	}
		
	return 0;
}
