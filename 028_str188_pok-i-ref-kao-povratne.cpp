#include <iostream>
#include <cstring>
using namespace std;

char *dolijepi(char *prvi,char *drugi, char *spojeni=0){
	spojeni=new char[strlen(prvi)+strlen(drugi)+1];
	char *indeks=spojeni;
	while (*prvi)
		*(indeks++)=*(prvi++);
	while (*drugi)
		*(indeks++)=*(drugi++);
	*indeks='\0';
	return spojeni;
};

int main(){
	char a[]="Vidi ";
	char b[]="malog.";
	
	cout<<dolijepi(a,b);
	
				
	return 0;
}
