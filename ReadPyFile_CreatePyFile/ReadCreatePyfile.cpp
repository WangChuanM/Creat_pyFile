#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	cout << "�����ɹ���" << endl;

	ofstream fout;
	fout.open("test.py");

	ifstream fin;
	fin.open("07templat.py",ios::in);
	if (fin.is_open()==true)
	{
		cout << "�򿪳ɹ�" << endl;
	}
	else {
		cout << "��ʧ��" << endl;
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
			cout << "********************************�ҵ���һ��" << endl;

			
		}
		else {
			//cout << "һ��Ҳû�ҵ�" << endl;
		}
	}

	fin.close();
	fout.close();


	system("pause");
	return 0;
}