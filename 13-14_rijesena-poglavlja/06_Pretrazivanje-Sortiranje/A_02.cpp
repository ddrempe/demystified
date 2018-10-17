#include <iostream>
#include <cstring>
using namespace std;

/* ULAZ: Polje od N rije�i
IZLAZ: Sortirati polje 
Ovo polje �e imati dvije dimenzije. Prva dimenzija se javlja zbog stringova, a druga dimenzija ide po upisanim rije�ima.
(Prva dimenzija = broj stringova u polju; druga dimenzija = duljina stringa!
Koristit �emo algoritam sortiranja umetanjem. */
 
int main(){	
	char a[1000][20];
	int n;
	
	do{
		cout<<"Koliko rijeci? "; cin>>n;
	}while(n<2 || n>1000);
	
	for(int i=0;i<n;i++) cin>>a[i];
	
	for(int i=1;i<n;i++){
		int j=i-1;
		char pom[20];
		strcpy(pom,a[i]);
		while (j>=0 && strcmp(a[j],pom)==1){
			strcpy(a[j+1],a[j]);
			j--;
		}
		strcpy(a[j+1],pom);
	}
	
	for(int i=0;i<n;i++) cout<<a[i]<<" ";

	
	return 0;
}
