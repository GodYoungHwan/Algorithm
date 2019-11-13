#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int count = 0;
    if(str.empty())
    {
        cout << count;
        return 0;
    }
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'c')
        {
            if (str[i + 1] == '=' || str[i + 1] == '-')
            {
                count++;
                i++;
                continue;
            }
        }
        if (str[i] == 'd')
        {
            if (str[i + 1] == 'z' && str[i + 2] == '=')
            {
                count++;
                i += 2;
                continue;
            }
            if (str[i + 1] == '-')
            {
                count++;
                i++;
                continue;
            }
        }

        if (str[i] == 'l' || str[i] == 'n')
        {
            if (str[i + 1] == 'j')
            {
                count++;
                i++;
                continue;
            }
        }

        if (str[i] == 's' || str[i] == 'z')
        {
            if (str[i + 1] == '=')
            {
                count++;
                i++;
                continue;
            }
            count++;
        }
        else
        {
            count++;
        }
    }

    cout << count;
}