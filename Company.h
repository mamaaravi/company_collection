#pragma once
#include "Manager.h"
#include "Programmer.h"
#include <vector>

class Company
{
	vector<Programmer>P;
	vector<Manager>M;
public:
	Company() = default;
	Company(vector<Programmer>p, vector<Manager>m);
	void Input(ifstream&in);
	void Output();
	void Output(ofstream&out);
	void Add();
	void Del();
	void MaxSal();
	~Company();
};