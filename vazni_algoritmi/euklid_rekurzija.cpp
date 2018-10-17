#include <iostream>

// globalna varijabla
int NZM;

//deklacija funkcije
void nzm(int x, int y);

using namespace std;
int main(){
	int x,y;
	char odgovor;	
	do{
	cout<<"Upisi prvi broj: ";
	cin>>x;
	cout<<"Upisi drugi broj: ";
	cin>>y;
	nzm(x,y);

	cout<<"Najveca zajednicka mjera je: "<<NZM<<endl;
	cout<<"Opet? d/[n]: ";
	cin>>odgovor;
	system("CLS");
	}while(odgovor!='n');	
	
	return 0;
}
	
void nzm(int x, int y){
	int r, ostatak;
	if((x==0) && (y==0)) NZM=0;
	if((x==0) && (y!=0)) NZM=y;
	if((x!=0) && (y==0)) NZM=x;
	if((x!=0) && (y!=0)){
		if(x<y){
			r=x;
			x=y;
			y=r;
		}
	ostatak=x%y;
	x=y;
	y=ostatak;
	nzm(x,y);
	}
}
