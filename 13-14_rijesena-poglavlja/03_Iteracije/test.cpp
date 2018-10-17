#include <iostream>
using namespace std;

/* 
ULAZ: Prirodni broj N i N decimalnih brojeva A1, ..., An
IZLAZ: Aritmetièka sredina brojeva A1 do An */

int main(){
	unsigned int N;
	cout << "Upisite N: ";
	cin >> N;
	float A, S = 0;
	int I;
	for (I = 1; I <= N; I++) {
		cout << "Upisite broj A_" 
             << I << ": ";
		cin >> A;
		S += A;
	}
	cout << I << endl;
	cout << "Aritmeticka sredina je " 
          << S/N << endl; 

	return 0;
}
