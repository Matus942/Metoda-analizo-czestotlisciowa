#include "stdafx.h"
#include "klasa.h"

//program ma wczytywac z plku , liczy czestosci wystepowania danego znaku, wyswietla posortowane wedlug litery lub czestosci wystepowan
//znalesc tekst w jezyku angielskim o dlugosci przynajmniej 10000 znakow zaszyfrowac cezarem dowolne przesuniecie i wyslac koledze po lewej stronie

void klasa::wczytaj()
{
	string a;
	string a1;
	ifstream plik("dane.txt");
	if (!plik)cout << "Brak dostepu do pliku" << endl;
	while (getline(plik, a))dane.push_back(a);
	plik.close();
	ifstream plik1("dane1.txt");
	if (!plik1)cout << "Brak dostepu do pliku" << endl;
	while (getline(plik1, a1))dane1.push_back(a1);
	plik1.close();
	
	/*cout << "podaj ciag znakow do zliczenia: " << endl;
	getline(cin, a);
	dane.push_back(a);*/
	
		

}
void klasa::licz()
{
	string d;
	string d1;
	int c = 0;
	int c1 = 0;
	double w = 0;
	double w1 = 0;
	string t;
	string t1;
	for (int i = 0; i < dane.size(); i++)
	{
		d = dane[i];
		c = c + d.size();
		for (int j = 0; j < d.size(); j++)
		{
			for (int g = 0; g < 27; g++)
			{
				if (d[j] == alfabet[g])
				{
					t = M[1][g];
					w = stod(t);
					w = w + 1;
					t = to_string(w);
					M[1][g] = t;
				}
				if (d[j] == alfabet1[g])
				{
					t = M[1][g];
					w = stod(t);
					w = w + 1;
					t = to_string(w);
					M[1][g] = t;
				}
			}
		}
	}
	for (int i = 0; i < dane1.size(); i++)
	{
		d1 = dane1[i];
		c1 = c1 + d1.size();
		for (int j = 0; j < d1.size(); j++)
		{
			for (int g = 0; g < 27; g++)
			{
				if (d1[j] == alfabet[g])
				{
					t1 = M1[1][g];
					w1 = stod(t1);
					w1 = w1 + 1;
					t1 = to_string(w1);
					M1[1][g] = t1;
				}
				if (d1[j] == alfabet1[g])
				{
					t1 = M1[1][g];
					w1 = stod(t1);
					w1 = w1 + 1;
					t1 = to_string(w1);
					M1[1][g] = t1;
				}
			}
		}
	}
	for (int y = 0; y < 27; y++)
	{
		t = M[1][y];
		w = stod(t);
		w = ((w * 100)/c);
		t = to_string(w);
		M[1][y] = t;
	}
	for (int y = 0; y < 27; y++)
	{
		t1 = M1[1][y];
		w1 = stod(t1);
		w1 = ((w1 * 100) / c1);
		t1 = to_string(w1);
		M1[1][y] = t1;
	}
}
void klasa::sortuj()
{
	//sort()
}
void klasa::zeruj()
{
	for (int h = 0; h < 27; h++)
	{
			M[1][h] = "0";
			M1[1][h] = "0";
			if (h == 26)
			{
				M[0][h] = ' ';
				M1[0][h] = ' ';
			}
			else
			{
				M[0][h] = z;
				M1[0][h] = z;
				z++;
			}
	}
}
void klasa::wys()
{
	for (int i = 0; i < 27; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << M[j][i]<<" ";
		}
		cout << "%";
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < 27; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << M1[j][i] << " ";
		}
		cout << "%";
		cout << endl;
	}

}
void klasa::przes()
{
	for (int i = 0; i < 27; i++)
	{
		if (M[1][0] == M1[1][i])
		{
			cout << "przesuniecie szyfru cezara jest rowne : " << i << endl;
		}
	}
}