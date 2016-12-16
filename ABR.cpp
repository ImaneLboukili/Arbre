#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstring>
#include "ABR.h"

using std::cout;
using std::cin;
using std::endl;

ABR::ABR(int* cle){
	
	this->fd = NULL;
	this->fg = NULL;
	this->cle = cle;
	
}

ABR ABR::getFg(){
	
	return *fg;
}

ABR ABR::getFd(){
	
	return *fd;
}

int ABR::getCle(){
	
	return *cle;
}

void ABR::verification(){
	if(fd != NULL && fg != NULL){
		cout << "Arbre non vide " << endl;
	}
	else{
		cout << "Arbre vide" << endl;
	}
}
ABR* ABR::recherche(int c ){
	if(*cle == c){
		return this;
	}
	if(c<*cle){
		fg->recherche(c);
	}
	else{
		fd->recherche(c);
	}
}

