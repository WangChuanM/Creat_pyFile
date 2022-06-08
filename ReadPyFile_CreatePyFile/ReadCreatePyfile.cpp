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
	string _def = "        {00}";
	cout << _def << endl;
	cout << "_def length"  << _def.length();
	while (getline(fin,buf))
	{
		fout << buf << endl;
		cout << buf << endl;
		if (buf == _def)
		{
			cout << "********************************找到了一个" << endl;

			
		}
		else {
			//cout << "一个也没找到" << endl;
		}
	}

	fin.close();
	fout.close();


	system("pause");
	return 0;
}