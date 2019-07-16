//dynamic memory allocation
#include <iostream>
using namespace std;

int main(){
	int *x = new(nothrow) int(25);
	if(!x){
		cout<<"Int not allocated\n";
	}
	else{
		cout<<sizeof(x)<<"\n";
	}
	float *r = new(nothrow) float(25);
	if(!r){
		cout<<"Float not allocated";	
	}
	else{
		cout<<sizeof(r)<<"\n";
	}
	
	int *array = new(nothrow) int[100];
	if(!array){
		cout<<"Array not allocated";
	}
	else{
		cout<<sizeof(array);
	}
	//flush
	delete x; delete r; delete [] array;
}
