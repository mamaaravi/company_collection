#include "Company.h"
#include <fstream>

Company::Company(vector<Programmer> p, vector<Manager> m)
{
	p = P; m = M;
}

void Company::Input(ifstream & in)
{
	char ch;
	while (!in.eof())
	{
		in >> ch;
		try
		{
			string s;
			if (ch != 'P'&&ch != 'M') throw s;
		}
		catch (string s)
		{
			cout << "Incorrect input!" << endl;
			system("pause");
		}
		if (ch == 'P')
		{
			Programmer temp;
			temp.Input(in);
			P.push_back(temp);
		}
		else if (ch == 'M')
		{
			Manager temp;
			temp.Input(in);
			M.push_back(temp);
		}
	}
}

void Company::Output()
{
	cout << "All the programmers: " << endl;
	for (auto it = P.begin(); it != P.end(); ++it)
	{
		Programmer temp;
		temp = *it;
		temp.Output();
	}
	cout << "All the manager: " << endl;
	for (auto it = M.begin(); it != M.end(); ++it)
	{
		Manager temp;
		temp = *it;
		temp.Output();
	}
}

void Company::Output(ofstream & out)
{
	out << "All the programmers: " << endl;
	for (auto it = P.begin(); it != P.end(); ++it)
	{
		Programmer temp;
		temp = *it;
		temp.Output(out);
	}
	out << "All the manager: " << endl;
	for (auto it = M.begin(); it != M.end(); ++it)
	{
		Manager temp;
		temp = *it;
		temp.Output(out);
	}
}

void Company::Add()
{
	while (true)
	{
		cout << "Press P if you want to add a Programmer." << endl
			<< "Press M if you want to add a Manager." << endl
			<< "Press 0 if you want to exit." << endl;
		char ch;
		cin >> ch;
		if (ch == 'P')
		{
			Programmer temp;
			temp.Input();
			P.push_back(temp);
		}
		else if (ch == 'M')
		{
			Manager temp;
			temp.Input();
			M.push_back(temp);
		}
		else if (ch == '0') break;
		else cout << "Incorrect input." << endl;
	}
}

void Company::Del()
{
	string sur;
	cout << "Enter a surname of person you want to delete from a list: ";
	cin >> sur;
	for (int i = 0; i < P.size(); ++i)
	{
		if(sur==P[i].GetSur())
			P.erase(P.begin() + i);
	}
	for (int i = 0; i < M.size(); ++i)
	{
		if (sur == M[i].GetSur())
			M.erase(M.begin() + i);
	}
}

void Company::MaxSal()
{
	Programmer MaxP = P[0];
	Manager MaxM = M[0];
	for (int i = 0; i < P.size(); ++i)
	{
		if (P[i] > MaxP)
			MaxP = P[i];
	}
	for (int i = 0; i < M.size(); ++i)
	{
		if (M[i] > MaxM)
			MaxM = M[i];
	}
	if (MaxP > MaxM)
	{
		cout << "The most paid worker is a Programmer." << endl;
		MaxP.Output();
	}
	else
	{
		cout << "The most paid worker is a Manager." << endl;
		MaxM.Output();
	}
}

Company::~Company()
{
}
