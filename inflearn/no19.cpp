#include <iostream>

using namespace std;

int main()
{
    int n, cnt = 0, tmp;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    tmp = arr[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > tmp)
        {
            tmp = arr[i];
            cnt++;
        }
    }
    cout << cnt;
}