#include "Student.h"

int Student::CheckBirth(string str)
{
	int check = 0;
	for (int i = 0; i < 10; i++)
	{
		if (((str[i] > 57) || (str[i] < 48)) && (str[i] != 46)) check = 1;
		if (str[3] > 49) check = 1;
		if ((str[0] == 50) && (str[1] > 49)) check = 1;
		if ((str[3] == 49) && (str[4] > 50)) check = 1;
		if ((str[0] == 50) && (str[1] > 49)) check = 1;
		if ((str[2] != 46) || (str[5] != 46)) check = 1;
		string alf = "�������������������������������������Ũ��������������������������abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!�;%:?*()";
		for (int j = 0; j < alf.size(); j++)
		{
			if (str[i] == alf[j]) check = 1;
		}
	}
	return check;
}

void Student::Creation()
{
	int work = 1;
	string sinput;
	cout << "\n������� ���: ";
	getline(cin, name);

	while (work != 0)
	{
		cout << "\n������� ���� �������� � ������� '��.��.����':";
		getline(cin, birth);
		work = CheckBirth(birth);
		if (work != 0) cout << "\n������� ������������ ������\n";
	}
	cout << "\n������� ���������: ";
	getline(cin, faculty);
	cout << "\n������� ������: ";
	getline(cin, group);
	
	cout << endl;
	cout << "\n������� ����� �������: ";
	getline(cin, record_book);

	//cin.sync();
	ed.Creation();

}

void Student::ShowInfo()
{
	cout << "\nName: " << name;
	cout << "\tBirthday " << Bday << "." << Bmounth << "." << Byear;
	cout << "\nFaculty: " << faculty;
	cout << "\tGroup: " << group;
	cout << "\nRecord book " << record_book;
	//ed.Showinfo();

}