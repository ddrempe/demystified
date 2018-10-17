#include <iostream>
#include <cmath> //sqrt() pow()
using namespace std;

/* Izradite program u kojem:
1. Se unose duljine stranica pravokutnika pa se pomoæu funkcija raèuna i ispisuje površina i opseg.

2. Korisnik unosi stranicu a i dijagonale d1 i d2 romba. Program zatim raèuna površinu i opseg romb a koristeæi preoptereæenje funkcija. Korisnik potom unosi
stranicu a kocke, a program raèuna pomoæu funkcija dijagonalu, površinu i volumen kocke.

3. Korisnik upisuje prirodni broj, a raèunalo ga ispisuje slovima. Za pretvaranje broja u rijeè koristiti funkcije.

4. Uèitava rijeè s tipkovnice duljine N slova, te pokreæe fukciju u kojoj se ispisuju sve rijeèi koje se mogu napraviti od ovih slova. Pri tome se misli na 
rijeèi od 2 pa do N slova. Isto se unešeno slovo ne smije koristiti više puta. No, dva unešena slova mogu biti jednaka.

5. Definiramo funkcije za a. Unos toèke u ravnini. Toèka se sastoji od dvaju koordinata tipa float. b. Funkcije za izraèun udaljenosti dvaju brojeva u ravnini
Program treba sa tipkovnice uèitati prirodni broj N i N toèaka, te vratiti dvije od unesenih toèaka koje su najbliže jedna drugoj i njihovu udaljenost. */

//1
void pravokutnik(float a,float b){
	cout<<"Povrsina pravokutnika je "<<a*b<<endl;
	cout<<"Opseg pravokutnika je "<<2*(a+b)<<endl;
}

//2
void romb(float a){
	cout<<"Opseg romba je "<<4*a<<endl;
}
void romb(float e,float f){
	cout<<"Povrsina romba je "<<e*f/2<<endl;
}
void kocka(float a){
	cout<<"Dijagonala kocke je "<<a*sqrt(3)<<endl;
	cout<<"Oplosje kocke je "<<6*pow(a,2)<<endl;	
	cout<<"Volumen kocke je "<<pow(a,3)<<endl;	
}


int main(){
	//1
	float a1,b1;
	cout<<"Pravokutnik"<<endl;
	cout<<"Unesite a: "; cin>>a1;
	cout<<"Unesite b: "; cin>>b1;
	pravokutnik(a1,b1);
	cout<<endl;
	
	//2
	float a2,d1,d2;
	cout<<"Romb"<<endl;
	cout<<"Unesite a: "; cin>>a2;
	cout<<"Unesite d1: "; cin>>d1;
	cout<<"Unesite d2: "; cin>>d2;
	romb(a2);
	romb(d1,d2);
	cout<<endl;
	
	float ak2;
	cout<<"Kocka"<<endl;
	cout<<"Unesite a: "; cin>>ak2;
	kocka(ak2);
		
}
