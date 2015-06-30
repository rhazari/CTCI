#ifndef BOOK_H
#define BOOK_H

#include <string>

using namespace std;

class Book{
    private:
        int book_id;
        string book_name;
        
        public:
        //Constructor
        Book(int id, string name);
        
        //Getters
        string getName() const;
        int getID() const; 
        
        //Setters
        void setName(string name);
        void setID(int id);
};

#endif


 
