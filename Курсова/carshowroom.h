#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h> 

using namespace std;

class AVTO
{
protected:
	string name, surname;
	int sum, num;
	string carmake, model, color, VIN;
	int price;
public:

	AVTO();

	AVTO(string name, string surname, int sum, int num);

	AVTO(const AVTO& copy);

	~AVTO();

	void Print();

	void Prints();

	void Car();

	void Client();

	void scars();

	void pcars();

	void sclient();

	void pclient(void);

	AVTO operator - (int x);

	AVTO operator + (int X);

	AVTO operator ++();
};
