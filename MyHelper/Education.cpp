#include "Education.h"
void Education::Creation()
{
	string enter11;
	string enter22;
	string enter33;
	int enter3 = -1;
	int enter2 = -1;
	int enter1 = -1;
	int work = 0;
	while (work != 1)
	{
		enter1 = -1;
		cout << "\nEnter Number of sessions: ";
		getline(cin, enter11);
		cin.clear();
		cin.sync();
		if (NumCheck(enter11) == 1)
		{
			cout << "You Entered letters. Try to enter number\n";//check
		}
		else
		{
			enter1 = StrToNum(enter11);
			if ((enter1 < 10) && (enter1 > 0))
			{
				work = 1;
			}
			else
			{
				cout << "\n\nStudent should have [1:9] sessions";
			}
		}

	}
	Se_amoun = enter1;
	for (int i = 0; i < enter1; i++)
	{
		work = 0;
		while (work != 1)
		{
			enter2 = -1;
			cout << "\nEnter Number of subjects in session (" << i + 1 << ") ";
			getline(cin, enter22);
			cin.clear();
			cin.sync();
			if (NumCheck(enter22) == 1)
			{
				cout << "You Entered letters. Try to enter number\n";//check
			}
			else
			{
				enter2 = StrToNum(enter22);
				if ((enter2 < 11) && (enter2 > 0))
				{
					work = 1;
				}
				else
				{
					cout << "\n\nStudent should have [1:10] subjects";
				}
			}

		}
		ses[i].Su_amount = enter2;
		for (int j = 0; j < enter2; j++)
		{
			work = 0;
			enter3 = -1;
			cout << "\nEnter name of subject " << j + 1 << ") ";
			getline(cin, ses[i].subjects[j].name);
			cin.clear();
			cin.sync();
			while (work != 1)
			{
				cout << "\nEnter mark: ";
				cin >> enter33;
				cin.get();
				cin.clear();
				cin.sync();
				if (NumCheck(enter33) == 1)
				{
					cout << "You Entered letters. Try to enter number\n";
				}
				else
				{
					enter3 = StrToNum(enter33);
					if ((enter3 < 6) && (enter3 > 1))
					{
						work = 1;
					}
					else
					{
						cout << "\n\nStudent should have [2:5] mark";
					}
				}

			}

			ses[i].subjects[j].mark = enter3;

		}
	}

}

void Education::Showinfo()
{
	for (int i = 0; i < Se_amoun; i++)
	{
		cout << "\nNumber of session " << i + 1 << "\n";
		for (int j = 0; j < ses[i].Su_amount; j++)
		{
			cout << "\n" << j + 1 << ") Subject " << ses[i].subjects[j].name;
			cout << "\tmark:" << ses[i].subjects[j].mark;//check
		}
		cout << "\n";
	}

}

int Education::NumCheck(string str)
{
	string ch = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for (int i = 0; i < str.size(); i++)
		for (int j = 0; j < ch.size(); j++)
			if (str[i] == ch[j]) return 1;
	return 0;
}

int Education::StrToNum(string str)
{
	int back = 0;
	int j = str.size() - 1;
	for (int i = 0; i < str.size(); i++)
	{
		back = (str[i] - 48) + back * 10;
	}
	return back;
}
