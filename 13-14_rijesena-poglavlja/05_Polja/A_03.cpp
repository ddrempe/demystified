#include <iostream>
#include <cstring>
using namespace std;

/* ULAZ:  Unijeti niz rijeèi S[0]..S[I-1] . Niz S1 može imati najviše 20 unosa. Ako se unese prazan string "" unos niza se prekida.
IZLAZ: Pronaæi najmanju i najveæu rijeè u nizu po leksièkom redoslijedu */
 
int main(){
	char s[100][20];
	int i=0;
	do{
		cout<<"Unesite string: ";
		cin.getline(s[i],20);		
	}while(i<19 && strcmp(s[i++],""));
	i--; //zapisat ce se i prazan string kao zadnji element, pa ga necemo brojiti
	
	char max[100], min[100];
	strcpy(max,s[0]); 	//max=s[0]
	strcpy(min,s[0]);	//min=s[0]
	
	for(int j=1;j<i;j++){
		if(strcmp(s[j],max)>0) strcpy(max,s[j]);
		if(strcmp(s[j],min)<0) strcpy(min,s[j]);
	}
	
	cout<<"MAX= "<<max<<endl;
	cout<<"MIN= "<<min<<endl;
	
	
	
	
	return 0;
}
