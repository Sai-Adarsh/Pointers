//Pointers to array
#include <iostream>
using namespace std;

int main(){
	int array[5] = {5, 17, 10, 3, 5};
	int *myArray = array;
	
	cout<<myArray<<"\n"; // prints address of first element in the array
	cout<<*myArray<<"\n"; //prints value of first element in the array
	cout<<myArray[3]<<"\n"; //prints the element at index 3
}
