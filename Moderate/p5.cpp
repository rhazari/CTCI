#include <iostream>
#include <map>

using namespace std;

int main()
{
    char s1[5] = "RGGB";
    //cout << s1 <<endl;
    char *s2 = new char[5];
    cout<<"Enter your guess"<<endl;
    cin >> s2;
    
    int hit_ = 0, psuedo_hit_ = 0;
    //cout<<s2<<endl;
    char *t1, *t2;
    t1 = s1;
    t2 = s2;
    
    map <char, int> m1;
    map <char, int> m2;
    while(*t1)
    {
        if(*t1 == *t2)
        {
            hit_++;
            m1[*t1] = 11;
        }
        m2[*t1] = 5;
        t1++;
        t2++;
    }
    cout<<"Hit count: "<<hit_<<endl;
    
    t2 = s2;
    while(*t2)
    {
        if(m2.find(*t2)->second == 5 && m1.find(*t2)->second != 11)
        {
            psuedo_hit_ ++;
        }
        t2++;
    }
    cout<<"Psuedo Hit count: "<<psuedo_hit_<<endl;
    
    return 0;
}
