// Braile.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <cmath>
#include "stdafx.h"
#include <string>
#include <cctype>
using namespace std;



int main()
{
	string tekst;
	cout << "Napisz tekst, ktory chcesz przekonwertowac na kod Braille'a bez polskich znakow: " << endl;
	getline(cin, tekst);
	int x = tekst.length();
	for (int i = 0; i<x; i++)
	{
		tekst[i] = tolower(tekst[i]); //lub tolower - zmniejsza
		cout << tekst[i] << " ";
	}
    return 0;
}

