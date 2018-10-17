#include <iostream>
using namespace std;

int main(){
	unsigned char a=0x25; //00100101 u hex zapisu
	unsigned char b=~a;
	
	cout<<hex<<int(a)<<endl; //Manipulator hex definiran u iostream biblioteci.
	cout<<int(b)<<endl<<dec;
	
	int c=64,d=1024;
	cout<<(c<<2)<<" "<<(d>>3)<<endl;
			
	return 0;
}
