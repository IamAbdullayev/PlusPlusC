#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

int main() {
// || ==== Pointer to Pointer Operations ================================ ||

	int var;
	int *ptr;
	int **pptr;

	var = 30;

	ptr = &var;

	pptr = &ptr;
	
	cout << var << endl;									// var - value of var = 30
	cout << &var << endl;									// &var - memory address of var
	cout << *(&var) << endl << endl;			// *(&var) - 1) &var - reference var = memory address of var; 2) *(memory address of var) - dereference &var = 30

	cout << ptr << endl;									// ptr - stores the memory address of var (ptr = &var) (pointers store memory addresses)
	cout << &ptr << endl;									// &ptr - reference ptr = memory address of ptr
	cout << *ptr << endl << endl;					// *ptr - dereference ptr = var (30); ptr => &var; *ptr => *(&var); *(&var) or *ptr => var; var => 30

	cout << pptr << endl;									// pptr - stores the memory address of ptr (**ptr = &ptr)
	cout << &pptr << endl;								// &pptr - memory address of pptr (reference)
	cout << *pptr << endl;								// *pptr - dereference pptr = ptr (the memory address of var); pptr => &ptr; *pptr => *(&ptr) or &var or ptr; 
	cout << &(*pptr) << endl << endl;			// &(*pptr) - 1) *pptr => dereference pptr = ptr; 2) &(*pptr) - reference ptr (the memory address of ptr)

	cout << **pptr << endl;								// **pptr - (the value at address ptr (30)) **pptr => dereference *pptr (*pptr = ptr or &var); *pptr = ptr (the memory address of var)
	cout << &(**pptr) << endl << endl;		// &(**pptr) - &var (the memory address of var); **pptr is value of var. reference value of var is &var


    return 0;
}