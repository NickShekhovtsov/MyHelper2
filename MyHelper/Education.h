#pragma once
#include <iostream>
#include<cmath>
#include <string>
using namespace std;


class Education
{
	class Sub
	{
	public:
		string name;
		unsigned short int mark;

	};
	class Session
	{
	public:
		int Su_amount;
		Sub subjects[10];
	};
public:
	int Se_amoun;
	Session ses[9];
	void Creation();
	void Showinfo();
	int NumCheck(string str);
	int StrToNum(string str);

};
