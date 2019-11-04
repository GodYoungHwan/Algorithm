#include <iostream>

using namespace std;

int main()
{
    int in, cnt = 0;
    bool flag;
    cin >> in;

    for (int i = 2; i <= in; i++)
    {
        flag = true;
        for (int j = 2; j * j <= i; j++)
        {

            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cnt++;
    }

    cout << cnt;
}