#include <iostream>
using namespace std;
/*
Ulaz: Pozitivni cijeli brojevi D, M, G
Izlaz: Broj dana protekao od 1.1.G do D.M.G. */

int main(){
	unsigned int d,m,g,x=0;
	bool prijestupna=false;
	cout<<"d: "; cin>>d;
	cout<<"m: "; cin>>m;
	cout<<"g: "; cin>>g;
	
	switch (m){
		case 12: x+=30;
		case 11: x+=31;
		case 10: x+=30;
		case 9: x+=31;
		case 8: x+=30;
		case 7: x+=31;
		case 6: x+=30;
		case 5: x+=31;
		case 4: x+=30;
		case 3:
		if (g%100) 
			if (g%4) x+=28;
			else x+=29;
		else
			if (g%400) x+=28;
				else x+=29;			
						
		case 2: x+=31;
		case 1: x+=d; 
	}
	cout << "Izmedju 1.1." << g << " i " << d << "." << m<< "." << g << " ima "<< x << " dana." << endl;

	
	return 0;	
}
