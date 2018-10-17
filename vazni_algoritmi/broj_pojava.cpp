#include <iostream>
#include <cstring>
using namespace std;

/* ULAZ: Polje cijelih brojeva A
IZLAZ: Brojevi poredani po velièini. U izlazu se isti broj ne smije pojaviti više puta, a pokraj njega se treba ispisati koliko se puta broj pojvljuje. 

koristiti mjehuricasto sortiranje */
 
int main(){	
	int a[1000],n,k;
	do{
		cout<<"Koliko brojeva zelite unositi? "; cin>>n;
	}while(n<2 || n>1000);
	
	for(int i=0;i<n;i++) {
		cout<<"Unesite "<<i+1<<". broj: "; cin>>a[i];	
	}
	
	bool zamjena=true;
	for(int i=n-1;i>0 && zamjena;i--){		
		zamjena=false;
		for(int j=0;j<i;j++){
			if(a[j]>a[j+1]){
				float pom=a[j];
				a[j]=a[j+1];
				a[j+1]=pom;
				zamjena=true;
			}
		}
	}
	

	int c = 0;
    int v = a[0];
    cout << a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] != v) {
           cout << " " << c << endl;
           v = a[i];
           c = 1;
           cout << a[i];
        }
        else 
             c++;   
    }
	cout<<" "<<c;

	
	return 0;
}
