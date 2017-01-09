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
	if(fd != NULL || fg != NULL){
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

<<<<<<< HEAD

=======
void ABR::setFg(ABR* filsg){
	fg = filsg;
}

void ABR::setFd(ABR* filsd){
	fd = filsd;
}

void ABR::insertion(int* cFeuille, int* cInsertion){
	
	ABR* feuille = NULL;
	feuille = this -> recherche(*cFeuille);

	ABR inserer = ABR(cInsertion);
	ABR* ptr = &inserer;

	if(*cFeuille < *cInsertion){
		(*feuille).setFd(ptr);
	}else if(*cFeuille > *cInsertion){
		(*feuille).setFg(ptr);
	}else{
		cout << "Error, la cle est la meme." << endl;
	}	
}
>>>>>>> 04fd35b1d48706983dc6ac958c6c2dea594c0b60
