#include <iostream>
using namespace std;

/* ULAZ: Prirodni broj N
IZLAZ:  Ispisati kako iz postojeæih novèanica dobiti iznos N */
 
int main(){
	
	int n,a[]={1000,500,200,100,50,20,10,5,2,1};
	do{
	cout<<"Unesite prirodni broj n: "; cin>>n;
	}while(n<1);		
	
	int i=0;
	while (n>0){
	    int c=0;
	    while (n>=a[i]){
	            c++;
	            n-=a[i];
	    }
		if(c>0) cout<<c<<" x "<<a[i]<<endl;
		i++;
    }	
	
	return 0;
}
