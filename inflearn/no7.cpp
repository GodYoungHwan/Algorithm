#include <iostream>

using namespace std;

int main()
{
    char in[101];
    string ans = "";

    cin.getline(in,101);

    for(int i = 0; in[i] != '\0' ; i++)
    {
        if(in[i] != ' ')
        {
            if(in[i]>=65 && in[i]<=90)
            {
                ans += in[i]+32;
                
            }
            else
            {
                ans += in[i];
            }
            
        }
    }

    cout << ans;
}