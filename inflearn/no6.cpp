#include <iostream>
#include <string>

using namespace std;

int main()
{
    string in;
    string temp = "";
    int sol;
    
    cin >> in;

    for(int i =0 ; in[i] !='\0' ; i++)
    {
        if(in[i] >=48 && in[i] <= 57)
        {
            temp += in[i];
        }
    }
        sol = stoi(temp);

        cout << sol;

}