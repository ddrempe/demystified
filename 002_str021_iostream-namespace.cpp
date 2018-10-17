#include <iostream> 
/* 
-Od prevoditelja se zahtijeva da u na� program uklju�i biblioteku iostream.
-U iostream biblioteci nalazi se izlazni tok te funkcije koje omogu�avaju ispis podataka na zaslon. #include je pretprocesorska naredba. 
-Prevoditelj prekine postupak prevo�enja koda u teku�oj datoteci, sko�i u datoteku iostream, prevede ju i na kraju se vrati u po�etnu datoteku 
na redak nakon naredbe #include
-iostream je primjer datoteke zaglavlja (header files) u kojima se nalaze deklaracije funkcija sadr�anih u odgovaraju�im bibliotekama.*/

using namespace std; 
/*
-using i namespace su klju�ne rije�i jezika kojima se aktivira odre�eno podru�je imena (imenik ili namespace)
-std je naziv imenika u kojem su obuhva�ene sve standardne funkcije, uklju�uju�i i one iz iostream biblioteke.
-Imenici postoje da se izbjegne kolizija istih imena funkcija ili varijabli iz razli�itih biblioteka.
-Ako dvije razli�ite funkcije iz dvije razli�ite biblioteke imaju isto ime, prevoditelj �e javiti gre�ku. */

int main(){
	cout<<"Ja sam za C++, a vi?"<<endl;
	/*
	-cout je ime izlaznog toka definiranog u biblioteci iostream, pridru�enog zaslonu ra�unala.
	-endl je konstanta u biblioteci iostream koja prebacuje ispis u novi redak. */
	return 0;
}

//Zadatak. Izbaciti pretprocesorsku naredbu i prou�iti pogre�ke. Isto ponoviti i za using namespace.
