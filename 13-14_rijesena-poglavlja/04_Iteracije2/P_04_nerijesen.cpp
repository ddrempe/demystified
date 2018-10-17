#include <iostream>
#define epsilon 1E-6
using namespace std;

/* ULAZ: Decimalni broj D i prirodni broj N
IZLAZ: N-ti korijen iz D */


int main () {
	int N;
	float D, x, y;
	
	do{
		cout << "Upisi N: "; cin >> N;
		cout << "Upisi D: "; cin >> D;
	} while (N<1 ||D<1);

	float A = 1, B = D; 
	
	do {
		x=(A+B) / 2;
		y=1;
		for (int i=1; i<=N; i++) y *= x;
		
		if (y<D) A = x;
		else B = x;
		
	} while (y != D && B-A > epsilon);
	cout << "Rjesenje je " << x << endl;
	
	return 0;
}

