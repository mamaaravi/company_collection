#include "Company.h"

int main()
{
	ifstream in;
	try
	{
		string s;
		in.open("indata.txt");
		if (!in) throw s;
		cout << "File is open." << endl;
	}
	catch (string s)
	{
		cout << "File not found." << endl;
		system("pause");
		return 0;
	}
	ofstream out("outdata.txt");
	Company A;
	A.Input(in);
	A.Output();
	A.Add();
	A.Output();
	A.Del();
	A.MaxSal();
	A.Output(out);
	system("pause");
	return 0;
}