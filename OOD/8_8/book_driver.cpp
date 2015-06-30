#include <iostream>
#include "book.h"

using namespace std;

int main()
{
    Book B1(141,"C++ Tutorial");
    cout<<B1.getName()<<endl;
    cout<<B1.getID()<<endl;
    
    //Book B2;
    B1.setName("Python Guide");
    B1.setID(131);
    
    cout<<B1.getName()<<endl;
    cout<<B1.getID()<<endl;
    return 0;
}
