#include <iostream>
#include <cfloat> //sadri flt_min i flt_max konstante
//#include <climits> sadri char,int,itd min i max konstante

using namespace std;

int main(){
	cout<<"Velicina tipova podataka\n______________________________________________________\n\n";
	cout<<"char \t\t"<<sizeof(char)<<"B"<<endl;
	cout<<"short int \t"<<sizeof(short int)<<"B"<<endl;
	cout<<"int \t\t"<<sizeof(int)<<"B = long int "<<sizeof(long int)<<"B"<<endl;
	cout<<"long long int \t"<<sizeof(long long int)<<"B"<<endl;
	cout<<"float \t\t"<<sizeof(float)<<"B"<<endl;
	cout<<"double \t\t"<<sizeof(double)<<"B"<<endl;
	cout<<"long double \t"<<sizeof(long double)<<"B"<<endl;
	
	cout<<"\nRasponi\n______________________________________________________\n\n";	
	cout<<"char \t\t\t od "<<CHAR_MIN<<"\t\t\t do "<<CHAR_MAX<<endl;
	cout<<"short int \t\t od "<<SHRT_MIN<<"\t\t\t do "<<SHRT_MAX<<endl;
	cout<<"unsigned short int \t od "<<0<<"\t\t\t\t do "<<USHRT_MAX<<endl;
	cout<<"int \t\t\t od "<<INT_MIN<<"\t\t\t do "<<INT_MAX<<endl;
	cout<<"unsigned int \t\t od "<<0<<"\t\t\t\t do "<<UINT_MAX<<endl;
	cout<<"long long int \t\t od "<<LLONG_MIN<<"\t do "<<LLONG_MAX<<endl;
	cout<<"unsigned long long int \t od "<<0<<"\t\t\t\t do "<<ULLONG_MAX<<endl;
	cout<<"float \t\t\t od "<<FLT_MIN<<"\t\t do "<<FLT_MAX<<endl;
	cout<<"double \t\t\t od "<<DBL_MIN<<"\t\t do "<<DBL_MAX<<endl;
	cout<<"long double \t\t od "<<LDBL_MIN<<"\t\t do "<<LDBL_MAX<<endl<<endl;

	
	return 0;
}
