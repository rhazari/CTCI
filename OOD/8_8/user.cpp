#include <iostream>
#include "user.h"

using namespace std;

//Constructors
User::User(int id, string name, int account)
{
    user_id = id;
    user_name = name;
    account_type = account;
}

//Setters
void User::setUserID(int id)
{
    user_id = id;
}

void User::setUserName(string name)
{
    user_name = name;
}

void User::setAccountType(int account)
{
    account_type = account;
}

//Getters
int User::getUserID() const
{
    return user_id;    
}

string User::getUserName() const
{
    return user_name;   
}

int User::getAccountType() const
{
    return account_type;
}
