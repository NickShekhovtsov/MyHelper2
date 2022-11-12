#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <Windows.h>
using namespace std;

class Human
{
public:
    string name;
    string second_name;
    string surname;
    int passport_series;
    int passport_number;
    int year_of_birth;
    void Init();
    Human();
};

