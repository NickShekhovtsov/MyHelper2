#include "Book.h"

void Book::show_book()
{
    cout << "\n��������: " << name;
    cout << "\t�����: " << author;
    cout << "\t����: " << genre;
    cout << "\tID: " << id;
    if (issued) cout << " ������";
    else cout << " � �������";
}

Book::Book(string name, string author, string genre)
{
    this->name = name;
    this->author = author;
    this->genre = genre;
}
