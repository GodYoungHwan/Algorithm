#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n, k, cnt, end;

    cin >> n >> k;
    cnt = k - 1;
    end = n - 1;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        arr.push_back(i + 1);
    }

    int i = 0;
    while (end)
    {
        if (cnt == 0 && arr[i] != 0)
        {
            arr[i] = 0;
            cnt = k - 1;
            end--;
        }
        if (arr[i] != 0)
        {
            cnt--;
        }
        i++;
        if (i == n)
        {
            i = 0;
        }

    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
            cout << arr[i];
    }
}