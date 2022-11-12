#include "Paper.h"

char* Paper::get_size()
{
    return size;
}

int Paper::get_Letter_size()
{
    return letter_size;
}

void Paper::set_size(char size[3])
{
    for (int i = 0; i < 3; i++)
    {
        this->size[i] = size[i];
    }
}

void Paper::set_letter_size(int letter_size)
{
    this->letter_size = letter_size;
}
