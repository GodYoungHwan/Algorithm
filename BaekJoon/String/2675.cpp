#include <iostream>
#include <string>

using namespace std;
int main(){
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        string str , sol;
        cin >> n >> str;

        for(int i =0 ; str[i] != '\0' ; i++)
        {
            for(int j =0 ;j<n; j++)
            {
                sol += str[i];
            }
        }
        cout << sol << endl;
    }
}