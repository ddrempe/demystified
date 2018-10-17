#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream datoteka;
	datoteka.open("nova.txt");
	
	if(!datoteka){
		cout<<"Datoteka "<<datoteka<<"ne postoji."<<endl;
		return -1;
	}
	
	char rijec[30];
	
	while(1){
		datoteka>>rijec;
		if(datoteka.eof()) break;
		cout<<rijec;
	}
	
	datoteka.close();
	
	return 0;
}
