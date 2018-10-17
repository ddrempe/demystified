#include <iostream>
using namespace std;

/*
ULAZ: U raèunalo se unese prirodni broj N i slovo 'C' ili 'I'
IZLAZ: Raèunalo i igraè igraju naizmjence. Ako je uneseno slovo 'C', prvo igra raèunalo, a inaèe prvi igra igraè. Postavljeno je N šibica. 
Igraè i raèunalo naizmjence uzimaju 1, 2 ili 3 šibice. Tko uzme posljednju šibicu, izgubio je. 
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
