#pragma once
#include "Book.h"
#include <string>
#include "Reader.h"
class Library
{
public:
    string name;
    string adress;
    string shedule;
    vector<Book> books;
    vector<Reader> readers;

    void show_all_books();
    void add_book(Book bk);
    void add_reader(Reader rd);
    bool CompareWords(string left, string right);
    void sort_by_author();
    void sort_by_name();
    void sort_by_genre();
    void sort_by_id();
    void search_book(string task);
    void take_book(int reader_id);
    void return_book(int reader_id);
};


