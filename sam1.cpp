#include<iostream>
using namespace std;

// Function should print all the array items
void foo(int * arr1, int i, int size  ){
	// print
	//	int i = 0; 
	cout << *arr1 << "," ;
	// move on and print others
	if(i != size-1) 
		foo(arr1+1, i+1 ,size);
	else
		return;
}


int main(){
	// int, double, char, float, bool, void, address (ptrs) 
	// class - User defined. --> Used a lot 
	
	int a = 2;
	int * ptr = &a;
	
	bool b = true;
	bool *ptrb = &b;
	
	// Size of pointers
	cout << sizeof(int) << ":" << sizeof(bool) << endl;
	cout << sizeof(int *) << ":" << sizeof(bool *) << endl;

	// Conversion
	int * ptra = (int *)&b;
	
	// Arrays 
	int arrI[5] = {1,2,3,4,5};	
	char arrC[10] = "Subha"; // Subha'\0'	// {'S','u','\0'}
	char d  = 'a'; // X -> a '\0'
	
	// Array is a type.
	// Array sometimes behaves as pointers 
	
	cout << arrI << endl; // Implicit Casting to a ptr
	cout << &arrI << endl;
	
	// Index method 

	for(int i = 0; i < 5 ; i ++){
		cout << arrI[i] << ",";
	}	
	cout << endl;

	// Pointer method
	for(int i = 0; i < 5 ; i++){
		cout << *(arrI+i) << ",";
	}
	cout << endl;
	
	foo(arrI, 0 , 5);
	
	// print char array.
	arrC[2] = '\0';
	cout << arrC << endl;
	
	
	
	return 0;
}



















