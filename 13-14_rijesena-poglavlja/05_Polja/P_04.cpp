#include <iostream>
#include <cstring> // strlen()
using namespace std;

/* ULAZ: Tekst S i pozitivni cijeli broj N.
IZLAZ: Tekst S' koji je dobiven tako da su najprije mala slova pretvorena u velika, a nakon toga je svako slovo iz S pomaknuto za N mjesta u ASCII tablici
 cout<<"Unesite prirodni n: "; cin>>n */

int main () {
	int n;	
	do{
		cout<<"Unesite kljuc koji je prirodni n: "; 
		cin>>n;
	}while(n<1 || n>25);
	
	char s[1000];
	cout<<"Unesite tekst: "; 
	cin.ignore();
	cin.getline(s,1000);
	int L=strlen(s);
	
	for(int i=0;i<L;i++){
		if(s[i]>=97&&s[i]<=122) s[i]-=32;		
		if(s[i]>63&&s[i]<91){
			s[i]+=n;
			if(s[i]>90) s[i]-=26;
		}
	}
	
	cout<<s;

		
		

	
		
	return 0;
}
