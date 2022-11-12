#include "Library.h"

void Library::show_all_books()
{
    for (int i = 0; i < books.size(); i++)
    {
        books[i].show_book();
    }
}

void Library::add_book(Book bk)
{
    books.push_back(bk);
    books[books.size() - 1].id = books.size();
}

void Library::add_reader(Reader rd)
{
    readers.push_back(rd);
    readers[readers.size() - 1].id = readers.size();
}

bool Library::CompareWords(string left, string right)
{
    if (left.size() < right.size())
    {
        for (int i = 0; i < left.size(); i++)
        {
            if (left[i] > right[i])
                return true;
            else
                if (left[i] < right[i])
                {
                    return false;
                }
        }
    }
    else
    {
        for (int i = 0; i < right.size(); i++)
        {
            if (left[i] > right[i])
                return true;
            else
                if (left[i] < right[i])
                {
                    return false;
                }
        }
    }

    return false;
}

void Library::sort_by_author()
{
    for (int i = 0; i < books.size(); i++) {
        for (int j = 0; j < books.size() - 1; j++) {
            //if (books[j].author[0] > books[j + 1].author[0]) {
            if (CompareWords(books[j].author, books[j + 1].author)) {
                Book b = books[j]; // создали дополнительную переменную
                books[j] = books[j + 1]; // меняем местами
                books[j + 1] = b; // значения элементов
            }
        }
    }
}

void Library::sort_by_name()
{
    for (int i = 0; i < books.size(); i++) {
        for (int j = 0; j < books.size() - 1; j++) {
            if (books[j].name[0] > books[j + 1].name[0]) {
                Book b = books[j]; // создали дополнительную переменную
                books[j] = books[j + 1]; // меняем местами
                books[j + 1] = b; // значения элементов
            }
        }
    }
}

void Library::sort_by_genre()
{
    for (int i = 0; i < books.size(); i++) {
        for (int j = 0; j < books.size() - 1; j++) {
            if (books[j].genre[0] > books[j + 1].genre[0]) {
                Book b = books[j]; // создали дополнительную переменную
                books[j] = books[j + 1]; // меняем местами
                books[j + 1] = b; // значения элементов
            }
        }
    }
}

void Library::sort_by_id()
{
    for (int i = 0; i < books.size(); i++) {
        for (int j = 0; j < books.size() - 1; j++) {
            if (books[j].id > books[j + 1].id) {
                Book b = books[j]; // создали дополнительную переменную
                books[j] = books[j + 1]; // меняем местами
                books[j + 1] = b; // значения элементов
            }
        }
    }
}

void Library::search_book(string task)
{
    for (int i = 0; i < books.size(); i++)
    {
        if (books[i].name.find(task) != std::string::npos) {
            books[i].show_book();
        }
    }
}

void Library::take_book(int reader_id)
{
    sort_by_id();
    int book_id;
    cout << "\nВведите id книги: ";
    cin >> book_id;
    if (book_id > 0)
        if (books[book_id - 1].issued == false)
        {
            readers[reader_id - 1].taken_books_ids.push_back(book_id);
            books[book_id - 1].issued = true;
        }
}

void Library::return_book(int reader_id)
{
    int reader_index_in_vector = reader_id - 1;

    int book_id = 0;

    cout << "\nВведите id книги: ";
    cin >> book_id;

    int book_index_in_vector = book_id - 1;
    if (book_id > 0)
        for (int i = 0; i < readers[reader_index_in_vector].taken_books_ids.size(); i++)
        {
            if (readers[reader_index_in_vector].taken_books_ids[i] == book_id)
            {
                readers[reader_index_in_vector].taken_books_ids.erase(readers[reader_index_in_vector].taken_books_ids.begin() + i);
                books[book_index_in_vector].issued = false;

            }
        }
}
