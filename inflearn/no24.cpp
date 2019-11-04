#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    int n, in, a;
    bool flag = true;
    cin >> n;
    vector<int> arr(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> in;
        if (i >= 1)
        {
            arr[abs(in - a)]++;
        }
        a = in;
    }

    for (int i = 1; i < n; i++)
    {
        if(arr[i] != 1) flag = false;
    }

    if(flag == true) cout << "YES";
    else cout << "NO";
}

//5
// 1 4 2 3 7