#include "Book.h"

void Book::show_book()
{
    cout << "\nНазвание: " << name;
    cout << "\tАвтор: " << author;
    cout << "\tЖанр: " << genre;
    cout << "\tID: " << id;
    if (issued) cout << " Выдана";
    else cout << " В наличии";
}

Book::Book(string name, string author, string genre)
{
    this->name = name;
    this->author = author;
    this->genre = genre;
}
