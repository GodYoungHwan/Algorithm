#include <iostream>

using namespace std;

int main()
{
    int n , temp , cnt;
    cin >> n;
    cnt =0;
    for (int i = 1; i <= n; i++)
    {
        temp = i;
        while(temp>0)
        {
            cnt++;
            temp /= 10;
        }
    }

    cout << cnt;
}