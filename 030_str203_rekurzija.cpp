#include <iostream>
using namespace std;

/* 
- Pozivom funkcije formiraju se unutar nje lokalne varijable koje su nedohvatljive izvan same funkcije. 
- Neovisnost lokalnih varijabli od okolnog programa omoguæava da funkcija poziva samu sebe - ponovnim pozivom se stvaraju nove lokalne varijable
potpuno neovisne o varijablama u pozivajuæoj funkciji. 
- Ovakav proces uzastopnog pozivanja naziva se rekurzija (engl. recursion). */

int faktorijel(int n){
	return (n>1)?(n*faktorijel(n-1)):1;
};

int main(){
	cout<<faktorijel(3);
	
					
	return 0;
}
