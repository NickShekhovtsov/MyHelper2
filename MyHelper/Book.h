#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <Windows.h>
using namespace std;

class Book
{
public:

    string name;
    string author;
    string genre;
    int id;
    bool issued = false;
    void show_book();
    Book(string name, string author, string genre);
};

