#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    string in;
    cin >> in;

    vector<string> vec;
    vec.push_back("ABC");
    vec.push_back("DEF");
    vec.push_back("GHI");
    vec.push_back("JKL");
    vec.push_back("MNO");
    vec.push_back("PQRS");
    vec.push_back("TUV");
    vec.push_back("WXYZ");

    int ans = 0; 
    for(char temp : in)
    {
        for(int j =0 ;j<vec.size(); j++)
        {
            if(vec[j].find(temp) > 10000){
                continue;
            }
            else{
                ans += j+3;
            }
        }    
    }
    cout << ans;
}