// 10
// 13 15 34 23 45 65 33 11 26 42
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int* arr = new int[n];

    cin >> n;

    for(int i=0 ;i<n; i++)
    {
        int temp = 0;
        cin >> temp;
        arr[i] = temp;
    }

    sort(arr,arr+n);

    cout << arr[n-1] - arr[0];

    

}