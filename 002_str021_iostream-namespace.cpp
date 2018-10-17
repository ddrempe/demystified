#include <iostream> 
/* 
-Od prevoditelja se zahtijeva da u naš program ukljuèi biblioteku iostream.
-U iostream biblioteci nalazi se izlazni tok te funkcije koje omoguæavaju ispis podataka na zaslon. #include je pretprocesorska naredba. 
-Prevoditelj prekine postupak prevoðenja koda u tekuæoj datoteci, skoèi u datoteku iostream, prevede ju i na kraju se vrati u poèetnu datoteku 
na redak nakon naredbe #include
-iostream je primjer datoteke zaglavlja (header files) u kojima se nalaze deklaracije funkcija sadržanih u odgovarajuæim bibliotekama.*/

using namespace std; 
/*
-using i namespace su kljuène rijeèi jezika kojima se aktivira odreðeno podruèje imena (imenik ili namespace)
-std je naziv imenika u kojem su obuhvaæene sve standardne funkcije, ukljuèujuæi i one iz iostream biblioteke.
-Imenici postoje da se izbjegne kolizija istih imena funkcija ili varijabli iz razlièitih biblioteka.
-Ako dvije razlièite funkcije iz dvije razlièite biblioteke imaju isto ime, prevoditelj æe javiti grešku. */

int main(){
	cout<<"Ja sam za C++, a vi?"<<endl;
	/*
	-cout je ime izlaznog toka definiranog u biblioteci iostream, pridruženog zaslonu raèunala.
	-endl je konstanta u biblioteci iostream koja prebacuje ispis u novi redak. */
	return 0;
}

//Zadatak. Izbaciti pretprocesorsku naredbu i prouèiti pogreške. Isto ponoviti i za using namespace.
