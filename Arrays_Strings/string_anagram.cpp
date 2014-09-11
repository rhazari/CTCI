#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	string buff1, buff2;
	cout <<"Enter string 1"<<endl;
	cin >> buff1;

	cout <<"Enter string 2"<<endl;
	cin >> buff2;

	map<char, int> m1, m2;
	for(string::iterator it = buff1.begin(); it != buff1.end(); it++)
	{
		m1[(*it)] += 1;
	}

	for(string::iterator it = buff2.begin(); it != buff2.end(); it++)
	{
		m2[(*it)] += 1;
	}
	
	int flag = 1;
	for(map<char,int>:: iterator it = m1.begin(); it != m1.end(); it++)
	{
		if(m2[it->first] != it->second)
		{
			flag = 0;
		}
	}

	if(flag)
		cout <<"Strings are anagrams"<<endl;
	else
		cout <<"Strings are not anagrams"<<endl;

	return 0;
}
