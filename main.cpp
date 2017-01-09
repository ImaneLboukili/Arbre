#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstring>
#include "ABR.h"

using std::cout;
using std::cin;
using std::endl;

int main(){
	
	int cle = 10;
	int cle1 = 9; 
	int* ptr = &cle1;
	int* ptr2 = &cle;
	ABR arbre1 = ABR(ptr);
	ABR* ptr1 = &arbre1;
	ABR arbre(&cle);
	
	arbre.verification();

	arbre.insertion(ptr2,ptr);

	arbre.verification();
	
	return EXIT_SUCCESS;
}
