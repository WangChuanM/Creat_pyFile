#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	cout << "创建成功！" << endl;

	ofstream fout;
	fout.open("test.py");

	ifstream fin;
	fin.open("07templat.py",ios::in);
	if (fin.is_open()==true)
	{
		cout << "打开成功" << endl;
	}
	else {
		cout << "打开失败" << endl;
	}
	
	string buf;
	string _def0 = "        {00}";
	string _def1 = "        {01}";
	string _def2 = "        {02}";
	string _def3 = "        {03}";
	string _def4 = "        {04}";
	
	while (getline(fin,buf))
	{
		
		if (buf == _def0)
		{
			buf = "        maxormins = [1]";
		}
		else if (buf == _def1)
		{
			buf = "        lb = [90, 7, 7, 0.65]";
		}
		else if (buf == _def2)
		{
			buf = "        ub = [120, 12, 10, 0.75]";
		}
		else if (buf == _def3)
		{
			buf = "        pop.ObjV = x1 * x2 * x3 * x4 * 1.15";
		}
		else if (buf == _def4)
		{
			buf = "        pop.CV = np.hstack([-10*(-1)*(-455.938353940571/ (x1 * x2 * x3 * x4 * 1.15)), -455.938353940571 /(x1 * x2 * x3 * x4 * 1.15) - 10, 0.5 - 0.45 * x3 + 0.1 *(x2 **2 / x3) * x4 - 0.42 * x2, 0.85 - x3 / x2, x3 /x2 - 0.98, x1* x2* x3* x4 * 1.15 - 8000])";

		}
		fout << buf << endl;
		cout << buf << endl;
	}

	fin.close();
	fout.close();


	system("pause");
	return 0;
}