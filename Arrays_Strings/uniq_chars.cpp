#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    string buff;
    cout <<"Enter a string"<<endl;
    cin >> buff;
    
    map<char, int> check_uniq; 
    for(string::iterator it = buff.begin(); it != buff.end(); it++)
    {
        check_uniq[(*it)] += 1;
    }
    
    int flag = 1;
    for(map<char,int>::iterator it = check_uniq.begin(); it != check_uniq.end(); it++)
    {
        //cout << it->first <<": "<<it->second<<endl;
        if(it->second > 1)
        {
            flag = 0;
            break;
        }
    }
    
    if(flag)
        cout<<"String has unique characters"<<endl;
    else
        cout<<"String does not have unique characters"<<endl;
    
    return 0;
}
