#include "Worker.h"

Worker::Worker(string s, int e, int sal, int m)
{
	s = surname; e = exp; sal = salary; m = minsal;
}

void Worker::Input()
{
	cout << "Enter surname: ";
	cin >> surname;
	cout << "Enter experience: ";
	cin >> exp;
	cout << "Enter salary: ";
	cin >> salary;
	cout << "Enter minimal salary: ";
	cin >> minsal;
}

void Worker::Input(ifstream & in)
{
	in >> surname;
	in >> exp;
	in >> salary;
	in >> minsal;
}

void Worker::Output()
{
	cout << "Worker " << surname << " with " << exp << " years experience, salary $" << salary << " min.sal=$" << minsal<<endl;
}

void Worker::Output(ofstream & out)
{
	out << "Worker " << surname << " with " << exp << " years experience, salary $" << salary << " min.sal=$" << minsal << endl;
}

bool Worker::operator>(const Worker &w)
{
	if (salary > w.salary) return 1;
	else return 0;
}

bool Worker::operator==(const Worker &w)
{
	if (salary == w.salary) return 1;
	else return 0;
}

Worker::~Worker()
{
}
