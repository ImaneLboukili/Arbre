#include <stdio.h>
#include <stdlib.h>

#ifndef abr
#define abr

class ABR{
	
	private:
		int* cle;
		ABR* fg;
		ABR* fd;
		
	public:
		ABR(int* cle);
		
		ABR getFg();
		ABR getFd();
		int getCle();
		void setFg(ABR* filsg);
		void setFd(ABR* filsd);

		
		void verification();
		ABR* recherche(int c);
		void insertion(int* cFeuille, int* cInsertion);
		int suppression(int cle);
		int parcours();
		int min();
		int max();
};

#endif
