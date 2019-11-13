#include <iostream>

using namespace std;

string compress(string str, int n)
{
    string temp = str.substr(0,n);
    int cnt = 1;
    string sol = "";
    for(int i = n; i<str.size(); i+=n)
    {
        if(temp == str.substr(i,n))
        {
            cnt++;
        }
        if(temp != str.substr(i,n))
        {
            if(cnt > 1)
            {
                sol += to_string(cnt) + temp;
                cnt = 1;
            }
            else sol += temp;
            temp = str.substr(i,n);
        }
    }
    if(cnt > 1)
        {
            sol += to_string(cnt) + temp;
        }
    else sol += temp;
    return sol;
}

int main(){
    string a = "aabbacc";
    int min = 1000;
    for(int i = a.size()/2; i>0; i--)
    {
        if(min > compress(a,i).size())
        {
            min = compress(a,i).size();
        }
    }
    cout << min;
    
}