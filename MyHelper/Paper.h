#pragma once
#include <iostream>
using namespace std;
class Paper
{
    char size[3] = "A4";
    int letter_size = 10;
public:
    char* get_size();
   

    int get_Letter_size();
    

    void set_size(char size[3]);
   

    void set_letter_size(int letter_size);
    
};

