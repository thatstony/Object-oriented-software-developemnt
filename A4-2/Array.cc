#include <iostream>
#include <iomanip>
using namespace std;

#include "Array.h"

Array::Array(){
  size=0;


}

Array::~Array(){
  for (int i =0;i<size;i++){
    delete elements[i];
  }
}

void Array::addBook(Book* book){
  if (size >= MAX_ARR_SIZE-1){
    cout<<"Error, reach MAX array size."<<endl;

  }
  Book* temp;
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            //If there is a smaller element found on right of the array then swap it.

            if(elements[j]->lessThan(elements[i])==true)
            {
                temp = elements[i];
                elements[i] = elements[j];
                elements[j] = temp;
            }
        }
    }
  elements[size++]= book;
}

void Array::print(){
  for(int i = 0; i<size;++i){
    elements[i]->print();
  }
}
