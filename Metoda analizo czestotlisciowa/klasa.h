#ifndef  KLASA_H
#define KLASA_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include <algorithm>

using namespace std;

class klasa
{
private:
	vector<string> dane;
	vector<string> dane1;
	char alfabet[27] = { 'a', 'b', 'c','d' ,'e' ,'f' ,'g' ,'h' ,'i' ,'j' ,'k' ,'l' ,'m' ,'n' ,'o' ,'p' ,'q' ,'r' ,'s' ,'t' ,'u' ,'v' ,'w' ,'x' ,'y' ,'z' ,' ' };
	char alfabet1[26] = { 'A', 'B', 'C','D' ,'E' ,'F' ,'G' ,'H' ,'I' ,'J' ,'K' ,'L' ,'M' ,'N' ,'O' ,'P' ,'Q' ,'R' ,'S' ,'T' ,'U' ,'V' ,'W' ,'X' ,'Y' ,'Z' };
	string M[2][27];
	string M1[2][27];
	int z = 65;
public:
	void wczytaj();
	void sortuj();
	void licz();
	void zeruj();
	void wys();
	void przes();
};


#endif // ! KLASA_H
