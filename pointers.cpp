//pointers
#include <iostream>
using namespace std;

int main(){
	//Referencing
		//integer
		int num = 10;
		int *numP = &num;
		cout<<numP<<" "<<*numP<<"\n";
		
		//float
		float data  = 10.5;
		float *dataP = &data;
		cout<<dataP<<" "<<*dataP<<"\n"; 
	
		//Dereferencing	
		float deref = 200.5;
		float *derefP = &deref;
		cout<<derefP<<" "<<*derefP<<"\n";
		*derefP = 200.7;
		cout<<derefP<<" "<<*derefP;
	
}
