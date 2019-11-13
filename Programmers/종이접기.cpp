#include <iostream>
#include <vector>
#include <string>
using namespace std;


string fold(string str)
{
    string sol = "0";
    for(int i =0 ;i<str.size(); i++)
    {
        string temp;
        if(i%2 == 0) temp = "1";
        if(i%2 == 1) temp = "0";
        sol += str[i] + temp;
    }
    return sol;
}

int main(){
    int in;
    vector<int> vec;
    cin >> in;
    string sol = "0";
    for(int i=0 ;i<in; i++)
    {
        sol = fold(sol);
    }
    for(int i =0 ;i<sol.size(); i++)
    {
        vec.push_back((int)sol[i]-48);
    }
    for(int i=0; i<vec.size();i++)
    {
        cout << vec[i] << " ";
    }

}