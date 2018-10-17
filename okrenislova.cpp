#include <iostream>
#include <cctype>
using namespace std;

char *okrenislova(char *pokNaNiz){
	char *pom=pokNaNiz;
	while(*pom){
		if(*pom>64&&*pom<90) *(pom)=tolower(*pom);
		else *(pom)=toupper(*pom);
		pom++;
	}
	return pokNaNiz;
};

int main(){
	char niz[100]="Ovo je niz";	
	cout<<okrenislova(niz)<<endl;
	
	cout<<"Upisite niz kojeg zelite preokrenuti: "; cin.getline(niz,100);
	cout<<okrenislova(niz)<<endl;
	
	return 0;
}

