#include "Manager.h"

Manager::Manager(string s, int e, int sal, int m, int r): Worker(s,e,sal,m)
{
	r = raby;
}

void Manager::Input()
{
	cout << "Enter surname: ";
	cin >> surname;
	cout << "Enter experience: ";
	cin >> exp;
	cout << "Enter salary: ";
	cin >> salary;
	cout << "Enter minimal salary: ";
	cin >> minsal;
	cout << "Enter number of workers: ";
	cin >> raby;
}

void Manager::Input(ifstream & in)
{
	in >> surname;
	in >> exp;
	in >> salary;
	in >> minsal;
	in >> raby;
}

void Manager::Output()
{
	cout << "Manager " << surname << " with " << exp << " years experience, salary $" << salary << " min.sal=$" << minsal << ", workers: " << raby << endl;
}

void Manager::Output(ofstream & out)
{
	out << "Manager " << surname << " with " << exp << " years experience, salary $" << salary << " min.sal=$" << minsal << ", workers: " << raby << endl;
}

Manager::~Manager()
{
}
