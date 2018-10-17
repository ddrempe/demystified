#include <iostream>
using namespace std;

int main(){
	
	char padobran[]="Faust Vrancic";
	cout<<padobran<<endl;
	
	for(int i=0;i<sizeof(padobran)/sizeof(char);i++) cout<<padobran[i];
			
	return 0;
}
