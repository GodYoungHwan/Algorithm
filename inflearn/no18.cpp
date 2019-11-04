#include <iostream>

using namespace std;
int main()
{
    int n, m, tmp, cnt = 0, max = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;

        if (tmp > m)
        {
            cnt++;
        }
        if (tmp < m)
        {
            cnt = 0;
        }
        if (cnt > max)
            max = cnt;
    }
    cout << max;
}