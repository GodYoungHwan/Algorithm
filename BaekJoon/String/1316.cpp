#include <iostream>
#include <vector>

using namespace std;

int main(){
    int tc;
    cin >> tc;
    int ans = 0;
    while(tc--)
    {
        string str;
        cin >> str;
        bool flag = true;
        vector<bool> vec(26,0);
        for(int i=0; i<str.size();i++)
        {
            if(str[i] != str[i+1])
            {
                if(!vec[str[i]-97])
                {
                    vec[str[i]-97] = 1;
                }
                else{
                        flag = false;
                        break;
                    }
            }
        }
        if(flag)
        {
            ans++;
        }
    }
    cout << ans << endl;
}