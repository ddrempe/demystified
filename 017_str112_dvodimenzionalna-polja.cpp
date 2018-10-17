#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int tablica[3][5]={{11,12,13,14,15},{21,22,23,24,25}}; //inicijalizacija èlanova prva dva retka	
	for(int i=0;i<3;i++) {
		for(int j=0;j<5;j++) cout<<setw(5)<<tablica[i][j];
		cout<<endl;
	}
	cout<<endl;
	
	int tablica2[3][5]={{11,12},{21},{31}};	//inicijalizacija pojedinih èlanova u svakom retku

		
	int tablica3[3][5]={11,12,13,14,15,21,22,23};	//izostavljanjem zagrada i zaraza inicijaliziraju se èlanovi popunjavanjem svakog retka do kraja bez preskakanja
	
	
	
			
	return 0;
}
