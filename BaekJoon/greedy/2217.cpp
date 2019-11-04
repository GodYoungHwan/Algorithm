#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    int* temparr = new int[n];

    for(int i =0 ; i<n; i++)
    {
        int temp;
        cin >> temp;
        arr[i] = temp;
        temparr[i] = 0;
    }
    sort(arr,arr+n);

    for(int i=0;i<n;i++)
    {
        temparr[i] = (n-i)*arr[i];
    }

    sort(temparr,temparr+n);

    cout << temparr[n-1];
}