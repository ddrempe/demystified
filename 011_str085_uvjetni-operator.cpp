#include <iostream>
using namespace std;

int main(){
	
	int x;	
	cout<<"x= ";cin>>x;
	x=(x>0)?x:-x; //x=abs(x)
	cout<<"abs(x)= "<<x<<endl;
	
	//Zadatak. Koristeæi uvjetni operator ispitajte parnost unesenog broja i ako je broj neparan poveæajte mu vrijednost za 1.
	int a;
	cout<<"a= "; cin>>a;
	a%2==0?cout<<"Broj a je paran.":cout<<"a+1= "<<a+1<<endl;
				
	return 0;
}
