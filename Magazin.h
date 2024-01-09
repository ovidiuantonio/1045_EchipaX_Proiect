#pragma once
#include "Produs.h"
#include "Subler.h"
#include "Bormasina.h"
#include "MasinaDeTunsIarba.h"
#include "Laptop.h"
#include <iostream>
#include <fstream>

using namespace std;
class Magazin
{
protected:
	string nume;
	int nrProduseMagazin;
	Produs** produseMagazin;

public:
	Magazin();
	Magazin(string nume, int nrProduseMagazin, Produs** produseMagazin);
	~Magazin();

	string getNume();
	int getNrProduse();

	void setNume(string nume);

	void writeFileProduseMagazin();
	void readFileProduseMagazin();
	void adaugaProdusMagazin(Produs* produs);

	void afiseazaMeniu();
	void afiseazaMeniuAdauga();

	void vizualizareProduse();
	void editareProdusMagazin(Produs* produs);
	void stergereProdusMagazin(int i);

	void operator-=(int i);
	Produs* operator[](int index);
	void operator+=(Produs* p);
};

