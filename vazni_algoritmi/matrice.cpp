#include <iostream>
#include <iomanip>  //setw()
using namespace std;

/* ULAZ: Uèitati dvije matrice A i B 
IZLAZ: Ispisati njihov zbroj i umnožak. Potrebno je provjeriti mogu li se upisane matrice zbrajati i množiti
 */
 
int main () {
	unsigned short k,l,m,n;
	cout<<"Unos prve matrice A"<<endl;
	cout<<"Unesite broj redaka: "; cin>>k;
	cout<<"Unesite broj stupaca: "; cin>>l;
	float A[k][l];
	for(int i=0;i<k;i++){
		for(int j=0;j<l;j++){
			cout<<"A["<<i<<"]["<<j<<"]: "; cin>>A[i][j];
		}		
	}
	cout<<endl;
	
	cout<<"Unos druge matrice B"<<endl;
	cout<<"Unesite broj redaka: "; cin>>m;
	cout<<"Unesite broj stupaca: "; cin>>n;
	float B[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<"B["<<i<<"]["<<j<<"]: "; cin>>B[i][j];
		}		
	}
	cout<<endl;
	
	if(k==m && l==n) { //provjera za zbrajanje, da li su matrice istog tipa 
		cout<<"Matrice su istog tipa. A+B= "<<endl;
		for(int i=0;i<k;i++){
			for(int j=0;j<l;j++){
				cout<<setw(5)<<A[i][j] + B[i][j];
			}
		cout<<endl;		
		}	
	}
	cout<<endl;
	
	float C[k][n];
	if(l==m) { //provjera za mnozenje, da li su ulancane (broj stupaca A = broju redaka B)
		cout<<"Matrice su ulancane. A*B= "<<endl;
		for (int i=0; i<k; i++)
	           for (int j=0; j<n; j++) {
	               C[i][j] = 0;
	               for (int j2=0; j2<l; j2++)
	                   C[i][j] += A[i][j2] * B[j2][j];
	           }
	}
	
	for(int i=0;i<k;i++){ 
		for(int j=0;j<n;j++){
			cout<<setw(5)<<C[i][j];
		}
		cout<<endl;		
	}	

	cout<<endl;
	
	return 0;
}
