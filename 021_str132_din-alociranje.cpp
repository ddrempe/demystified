#include <iostream>
using namespace std;

int main(){
	
    float nekiBroj; //Varijablu deklariramo samo da bi pokazivaè usmjerili na nju
    float *pokNaNekiBroj=&nekiBroj;
    *pokNaNekiBroj=34.234;
    
    float *pokazivac;
    pokazivac=new float(10.5);    
    delete pokazivac;
    
    const double *elektron=new const double (1.6e-19);
    delete elektron;
    
    int *sati=new int[12];
    delete[] sati;
    
	
			
	return 0;
}
