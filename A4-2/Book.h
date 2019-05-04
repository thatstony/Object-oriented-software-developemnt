#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;


class Book
{
  public:
    Book(int=0, string="Unknown", string="Unknown", int=0);
    void setBook(int, string, string, int);
    void print();
    virtual bool lessThan(Book*)=0;
    int getId();
    string getAuthor();

  private:
    int    id;
    string title;
    string author;
    int    year;
};

#endif
