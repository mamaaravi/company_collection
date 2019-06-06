#include "Programmer.h"

Programmer::Programmer(string s, int e, int sal, int m, int h):Worker(s,e,sal, m)
{
	h = hours;
}

void Programmer::Input() 
{
	cout << "Enter surname: ";
	cin >> surname;
	cout << "Enter experience: ";
	cin >> exp;
	cout << "Enter salary: ";
	cin >> salary;
	cout << "Enter minimal salary: ";
	cin >> minsal;
	cout << "Enter hours of work: ";
	cin >> hours;
}

void Programmer::Input(ifstream & in)
{
	in >> surname;
	in >> exp;
	in >> salary;
	in >> minsal;
	in >> hours;
}

void Programmer::Output()
{
	cout << "Programmer " << surname << " with " << exp << " years experience, salary $" << salary << " min.sal=$" << minsal <<", hours: "<<hours<< endl;

}

void Programmer::Output(ofstream & out)
{
	out << "Programmer " << surname << " with " << exp << " years experience, salary $" << salary << " min.sal=$" << minsal << ", hours: " << hours << endl;

}
//bool Programmer::operator>(const Programmer &w)
//{
//	if (salary > w.salary) return 1;
//	else return 0;
//}
//
//bool Programmer::operator==(const Programmer &w)
//{
//	if (salary == w.salary) return 1;
//	else return 0;
//}

Programmer::~Programmer()
{
}
