#include <iostream>
using namespace std;

int main(){
	float a,b;
	char x;
	cout<<"Unesite a: "; cin>>a;
	cout<<"Unesite b: "; cin>>b;
	cout<<"Unesite operator za zeljenu racunsku operaciju: "; cin>>x;
	
	switch(x){
		case '+':cout<<"a+b= "<<a+b; break;
		case '-':cout<<"a-b= "<<a-b; break;
		case '*':cout<<"a*b= "<<a*b; break;
		case '/':cout<<"a/b= "<<a/b; break;
		default: cout<<"Greska! Unesite neki od podrzanih operatora (+ - * /)"; break;
	}
	
	return 0;
};
