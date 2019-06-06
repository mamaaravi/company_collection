#pragma once
#include "Worker.h"

class Manager:public Worker
{
	int raby;
public:
	Manager() :Worker() {};
	Manager(string s, int e, int sal, int m, int r);
	void Input() override;
	void Input(ifstream&in) override;
	void Output() override;
	void Output(ofstream&out) override;
	string GetSur() { return surname; }
	~Manager();
};