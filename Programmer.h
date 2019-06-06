#pragma once
#include "Worker.h"

class Programmer :public Worker
{
	int hours;
public:
	Programmer() :Worker() {};
	Programmer(string s, int e, int sal, int m, int h);
	void Input() override;
	void Input(ifstream&in) override;
	void Output() override;
	void Output(ofstream&out) override;
	string GetSur() { return surname; }
	/*bool operator>(const Programmer&);
	bool operator==(const Programmer&);*/
	~Programmer();
};