#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

#define SIZE 50
using namespace std;

void reverse_string(char* string, int length)
{
    char buf;
    char* temp = string+length-1;   
    while(temp > string)
    {
        buf = *string;
        *string++ = *temp;
        *temp-- = buf;
    }
}

int main()
{
    char* string = (char*)malloc(sizeof(char)*SIZE);
    cout <<"Enter a string"<<endl;
    scanf("%[^\n]s",string);
    
    //cout << string<<endl;
    int len = strlen(string);
    reverse_string(string,len);
    
    cout << string<<endl;
    return 0;
}
