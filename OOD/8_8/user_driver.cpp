#include <iostream>
#include "user.h"

using namespace std;

int main()
{
    User U1(25,"Raihan",1);
    cout<<U1.getUserID()<<" ";
    cout<<U1.getUserName()<<" ";
    cout<<U1.getAccountType()<<endl;
    
    /*User U2;
    U2.setUserID(31); U2.setUserName("Hazarika"); U2.setAccountType(0);
    cout<<U2.getUserID()<<endl;
    cout<<U2.getUserName()<<endl;
    cout<<U2.getAccountType()<<endl;*/
    
    U1.setUserID(21); U1.setAccountType(3);
    cout<<U1.getUserID()<<" ";
    cout<<U1.getUserName()<<" ";
    cout<<U1.getAccountType()<<endl;
    
    return 0;
}
