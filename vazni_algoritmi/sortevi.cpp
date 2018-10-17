#include <iostream>	//
#include <cstdlib>	//system(), rand(), srand(), RAND_MAX
#include <iomanip>	//setprecision(), setw()
#include <cmath>	//sqrt(), pow()
#include <ctime>	//time()
#include <climits>	//INT_MIN
#include <cfloat>	//FLT_MIN
#include <cstring>	//strcpy(), strcmp(), strlen()
#include <fstream>	//ifstream() ofstream()

#define epsilon 1e-10

using namespace std;

void izborom(float a[],int n){
	for(int i=n;i>1;i--){
		int max=0;
		for(int j=1;j<i;j++){
			if(a[j]>a[max]) max=j;
		float pom=a[i-1];
		a[i-1]=a[max];
		a[max]=pom;			
		}
	}	
}

void zamjenom(float a[],int n){
	for(int i=n-1;i>0;i--){
		for(int j=0;j<i;j++){
			if(a[j]>a[i]){
				float pom=a[i];
				a[i]=a[j];
				a[j]=pom;
			}
		}
	}
}

void mjehuricasto(float a[],int n){
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
}

void umetanjem(float a[],int n){
	for(int i=1;i<n;i++){
		int j=i-1;
		float pom=a[i];
		while(j>=0 && a[j]>pom)
			a[j+1]=a[j--];
		a[j+1]=pom;		
	}
}

int main(){
	int n;
	do{
		cout<<"Unesite velicinu polja: ";
		cin>>n;
	}while(n<2);
	
	float a[n];
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]= "; cin>>a[i];
	}
	
	umetanjem(a,n);
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	
	return 0;
}
