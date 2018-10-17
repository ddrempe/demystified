#include <iostream>
#include <ctime> //time()
#include <cstdlib> //srand(), rand(), RAND_MAX
using namespace std;

/* Izradite program u kojem:
1. Se unosi 5 brojeva (brojevi mogu biti cijeli i decimalni) u jednodimenzionalno polje tipa float i potom ispišite unesene brojeve obrnutim redoslijedom.

2. Pronaðite najmanji i najveci broj u polju iz prethodne toèke i ispišite ih na zaslon, pretvorite te min i max brojeve u cjelobrojne vrijednosti, 
te cjelobrojne vrijednosti modularno podijelite (max/min) te rezultat ispišite. Nakon toga deklarirajte i inicijalizirajte novo polje koje ce biti tipa 
char s time da to novo polje mora biti duljine konstante vrijednosti 4 te ispišite vrijednosti svih èlanova polja do kraja stringa.

3. Izradite algoritam koji de izraèunati prvih M brojeva Fibonaccijevog niza Fn za n = 0, 1. 

4. U svaki element polja iz prve toèke upišite sluèajno izgeneriran broj u intervalu [0,127] i sortirajte polje uzlazno. 
Nakon toga za svaki cjelobrojni dio elemenata polja odredite ekvivalentni znak u ASCII tablici.

5. Napravite algoritam koji ce pronadi magièni kvadrat 5 x 5 i ispisati ga na zaslon. Magièni kvadrat n-tog reda je kvadratna shema n×n brojeva od 1 do n^2 
u kojoj jezbroj u svakom stupcu, retku i dijagonali jednak i iznosi: Sn=n(1+n^2)/2 */
 
int main(){

	//1
	float p1[5];
	for(int i=0;i<5;i++){
		cout<<"Upisite "<<i+1<<". broj: "; cin>>p1[i];
	}
	for(int i=4;i>=0;i--) cout<<p1[i]<<" ";
	cout<<endl<<endl;
	
	//2
	float min,max;
	min=max=p1[0];
	for(int i=1;i<5;i++){
		if(p1[i]<min) min=p1[i];
		if(p1[i]>max) max=p1[i];
	}
	cout<<"Najveci u polju je "<<max<<", a najmanji "<<min<<endl;
	cout<<"max % min= "<<int(max)%int(min)<<endl;
	char p2[]={'n','o','v','o'};
	
	for(int i=0;i<4;i++) cout<<p2[i];
	cout<<endl<<endl;
	
	//3
	cout<<"Izracun prvih M brojeva Fibonaccijevog niza"<<endl;
	int m;
	do{
		cout<<"Unesite M: "; cin>>m;
	}while(m<1 || m>1000);
	
	int p3[m];
	p3[0]=0,p3[1]=1,p3[2]=1; 
	for(int i=3; i<m; i++) p3[i]=p3[i-1]+p3[i-2];
	for(int i=0; i<m; i++) cout<<p3[i]<<" ";
	cout<<endl<<endl;
	
	//4
	srand(time(0));
	rand();
	for(int i=0;i<5;i++) p1[i]=rand()/(RAND_MAX/126)+1;	
		
	for(int i=5;i>1;i--){
		int max=0;
		for(int j=1;j<i;j++)
			if(p1[j]>p1[max]) max=j;
		float pom=p1[i-1];
		p1[i-1]=p1[max];
		p1[max]=pom;
	}
	
	for(int i=0; i<5; i++) cout<<char(p1[i])<<" ";

	//5
	
	
	
	
	
	
	
	
	


	
	
	return 0;
}
