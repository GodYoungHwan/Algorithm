//대문자를 소문자로, 소문자를 대문자로

#include <iostream>
#include <string>
using namespace std;

void toUpper(string str)
{
    for(int i =0; i<str.size(); i++)
    {
        str[i]=toupper(str[i]);
    }
    cout << str;
}

void toLower(string str,int n)
{
    for(int i=0 ; i<n; i++)
    {   
        str[i] =tolower(str[i]);   
    }

    cout << str;
}

int main()
{
    string str = "hello";
    toUpper(str);

   
}