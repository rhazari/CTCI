#ifndef USER_H
#define USER_H

#include <string>

using namespace std;

class User
{
    private:
        int user_id;
        string user_name;
        int account_type;
        
    public:
        //Constructor
        User(int id, string name, int account);
        
        //Getters
        int getUserID() const;
        string getUserName() const;
        int getAccountType() const;
        
        //Setters   
        void setUserID(int id);
        void setUserName(string name);
        void setAccountType(int account); 
     
};

#endif
