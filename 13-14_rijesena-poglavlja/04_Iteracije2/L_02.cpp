#include <iostream>
#include <iomanip>
#include <cmath>
#define epsilon 1e-10
using namespace std;

/* 
ULAZ: 
IZLAZ: e na toènost 10^(-10) */

int main () {
	double e=1;
	int i=1, fakt=1;
	while(1./(fakt*i)> epsilon/2) {
		fakt *= i++;
		e+= 1./fakt;
	}
	cout<<setprecision(11)<<"e= "<<e<<endl;
	
	
	return 0;
}

