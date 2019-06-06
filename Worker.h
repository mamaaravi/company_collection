#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Worker
{
protected:
	string surname;
	int exp;
	int salary;
	int minsal;
public:
	Worker() = default;
	Worker(string s, int e, int sal, int m);
	virtual void Input();
	virtual void Input(ifstream&in);
	virtual void Output();
	virtual void Output(ofstream&out);
	string GetSur() { return surname; }
	bool operator>(const Worker&);
	bool operator==(const Worker&);
	~Worker();
};