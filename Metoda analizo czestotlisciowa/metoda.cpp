// metoda.cpp: Okre�la punkt wej�cia dla aplikacji konsoli.
//

#include "stdafx.h"
#include "klasa.h"


int main()
{
	klasa l;
	
	l.zeruj();
	l.wczytaj();
	l.licz();
	//l.sortuj();
	l.wys();
	l.przes();

	system("pause");
	return 0;
}

