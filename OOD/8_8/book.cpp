#include <iostream>
#include "book.h"

using namespace std;

Book::Book(int id, string name)
{
    book_name = name;
    book_id = id;
}

void Book::setName(string name)
{
    book_name = name;
}

void Book::setID(int id)
{
    book_id = id;
}

string Book::getName() const
{
    return book_name;   
}

int Book::getID() const
{
    return book_id;
}


