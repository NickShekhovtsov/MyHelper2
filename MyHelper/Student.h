#pragma once
#include <iostream>
#include <string>
#include "Education.h"
using namespace std;
class Student
{
	string name;
	string birth;
	unsigned int Bday;
	unsigned int Bmounth;
	unsigned int Byear;
	string faculty;
	string group;
	string record_book;
	int StrToNum(char* str);
	int NumCheck(char* str);
	int CheckBirth(string str);
public:
	Education ed;
	void Creation();
	void ShowInfo();


};
