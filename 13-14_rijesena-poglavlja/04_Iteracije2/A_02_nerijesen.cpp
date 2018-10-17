#include <iostream>
using namespace std;

/*
ULAZ: U ra�unalo se unese prirodni broj N i slovo 'C' ili 'I'
IZLAZ: Ra�unalo i igra� igraju naizmjence. Ako je uneseno slovo 'C', prvo igra ra�unalo, a ina�e prvi igra igra�. Postavljeno je N �ibica. 
Igra� i ra�unalo naizmjence uzimaju 1, 2 ili 3 �ibice. Tko uzme posljednju �ibicu, izgubio je. 
*/

int main () {
	int N;
	char c;
	cout << "Upisi broj sibica: ";
	cin >> N;
	cout << "Tko prvi igra (C,I)? ";
	
	do{
		cin >> c;
	}while (c != 'c' && c != 'C' && c != 'i' && c != 'I');
	
	bool igraj;
	if (c == 'C' || c == 'c') igraj = true;
	else igraj = false;
	int P;
	
	while (N>0) {
		for (int i = 1; i <= 3; i++) {
			for (int j = 1; j <= N; j++) {
				if (i == 1) cout << "o";
				else cout << "|";
				if (j%3) cout << "  ";
			}
			cout << endl;
		} 
		if (igraj) {
			if ((N-1)%4) P = (N-1)%4;
			else P = 1;
			N -= P;
			cout << "Uzimam " << P << endl;
		}
		else {
			do {
				cout << "Uzimas: ";
				cin >> P;
			} while (P<1 || P>3 || P>N);
			N -= P;
		}
	 	igraj = !igraj;
	}
	if (igraj) 
		cout << "Pobjedio sam. Ja sam genije!" << endl;
	else
		cout << "Slucajno si ti pobjedio. Hajdmo jos jednom" << endl;

	return 0;
}
