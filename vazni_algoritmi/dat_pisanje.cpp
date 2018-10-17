#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream datoteka;
	datoteka.open("nova.txt");
	
	datoteka<<"Ovo je nova datoteka."<<endl;
	int a[5];
	for(int i=0;i<5;i++) cin>>a[i];

	for(int i=0;i<5;i++) datoteka<<a[i]<<" ";
	datoteka.close();
	
	return 0;
}
