#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstring>
#include "ABR.h"

using std::cout;
using std::cin;
using std::endl;

int main(){
	
	int cle = 1;
	
	ABR arbre(&cle);
	
	cout << arbre.getCle() << endl;

	
	return EXIT_SUCCESS;
}
