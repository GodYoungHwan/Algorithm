#include <iostream>

using namespace std;
int main()
{
    int n, k , sum = 0 , max = -99999;
    int* arr = new int[n];
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i<k; i++)
    {
        sum += arr[i];
    }

    for(int i = k; i<n; i++)
    {
        sum = (sum - arr[i-k]+arr[i]);

        if(sum > max) max = sum;
    }

    cout << max;
}